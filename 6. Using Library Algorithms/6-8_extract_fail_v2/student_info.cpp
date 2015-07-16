// source file for Student_info-related functions

#include <student_info.h>
#include <grade.h>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <ios>
#include <stdexcept>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::max;
using std::istream;
using std::vector;
using std::fstream;
using std::streamsize;
using std::setprecision;
using std::domain_error;

static int minPass = 60;



bool compare(const Student_info& x, const Student_info& y)
{
    return x.name < y.name;
}

istream& read(istream& is, Student_info& s)
{
    // read and store the student's name and midterm and final exam grades
    is >> s.name >> s.midterm >> s.final;

    read_hw(is, s.homework);    // read and store all the student's homework grades
    return is;
}

istream& read_hw(istream& in, vector<double>& hw)
{
    if (in)
    {
        // get rid of previous contents
        hw.clear();

        // read homework grades
        double x;
        while (in >> x)
        {
            hw.push_back(x);
        }

        // clear the stream so that input will work for the next student
        in.clear();
    }

    return in;
}


bool fgrade(const Student_info &s)
{
    return grade(s) < minPass;
}






//std::vector<Student_info>
//extract_fails(std::vector<Student_info>& students)
//{
//    typedef vector<Student_info>::iterator it;

//    it  beg = stable_partition( students.begin(), students.end(), pgrade);

//    vector<Student_info> fail(beg, students.end() );

//    students.erase(beg, students.end());

//    return fail;
//}


std::vector<Student_info>
extract_fails2(std::vector<Student_info>& students, int pass)
{
    // set new passing level;
    changeMinPass(pass);

    typedef vector<Student_info>::iterator it;

    it  beg = stable_partition( students.begin(), students.end(), pgrade);

    vector<Student_info> fail(beg, students.end() );

    students.erase(beg, students.end());

    return fail;
}



// print out of results
void printingResults(const std::vector<Student_info>& students, std::string::size_type maxlen)
{
    for(vector<Student_info>::size_type i = 0;
        i != students.size(); ++i)
    {
        cout << students[i].name << string(maxlen + 1 - students[i].name.size(), ' ' );

        try
        {
            double final_grade = grade(students[i]);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade << setprecision(prec);
        }
        catch(domain_error e)
        {
            cout << e.what();
        }

        cout << endl;
    }
}


std::vector<Student_info> classify(std::vector<Student_info>& students)
{
    typedef vector<Student_info>::iterator it;
    it  ep = stable_partition (students.begin(), students.end(), checkChar);
    vector<Student_info> fail(ep, students.end());

    students.erase(ep, students.end());

    return fail;
}

bool checkChar(Student_info &s)
{
    static const string let = "abcdefghijABCDEFGHIJ";

    return  find(let.begin(), let.end(), s.name[0]) != let.end();
}

bool pgrade(const Student_info &s)
{
    return !fgrade(s);
}


void changeMinPass(int n)
{
    minPass = n;
}
