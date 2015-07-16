#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student_info
{
    string name;
    double midterm;
    double final;
    vector<double> homework;
};


istream& read(istream& is, Student_info& s)
{
    // read and store the student's name and midterm, final exam grades
    is >> s.name >> s.midterm >> s.final;

    read_hw(is, s.homework);    // read and store all the student's homework grades
    return is;
}

double grade(const Student_info& s)
{
    return grade(s.midterm, s.final, s.homework);
}


bool compare(const Student_info& x, const Student_info& y)
{
    return x.name < y.name;
}







int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

