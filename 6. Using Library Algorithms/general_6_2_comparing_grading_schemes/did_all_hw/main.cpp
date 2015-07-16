// 6.2 Comparing Grading Schemes

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void write_analysis(ostream& out,
                    const string& name,
                    double analysis(const vector<Student_info>&),
                    const vector<Student_info>& did,
                    const vector<Student_info>& didnt)
{
    out << name << ":median(did) = " << analysis(did) <<
                   ", median(didnt) = " << analysis(didnt) << endl;
}

double grade_aux(const Student_info& s)
{
    try
    {
        return grade(s);
    }
    catch (domain_error)
    {
        return grade(s.midterm, s.final, 0);
    }
}

// this version works fine
double median_analysis(const vector<Student_info>& students )
{
    vector<double> grades;

    transform(students.begin(), students.end(), back_inserter(grades), grade_aux());

    return median(grades);
}



bool did_all_hw(const Student_info& s)
{
    return ((find(s.homework.begin(), s.homework.end(), 0)) == s.homework.end() );
}


int main()
{
    // students who did and didnt do their homework
    vector<Student_info> did;
    vector<Student_info> didnt;

    // read the student records and partition them
    Student_info student;
    while( read(cin, student))
    {
        if (did_all_hw(student))
            did.push_back(student);
        else
            didnt.push_back(student);
    }

    // veryfi that the analyses will show us something
    if (did.empty())
    {
        cout << "No student did all the homework!" << endl;
        return 1;
    }
    if(didnt.empty())
    {
        cout << "Every student did all the homework!" << endl;
        return 1;
    }

    // do the analyses
    write_analysis(cout, "median", median_analysis, did, didnt);
    write_analysis(cout , "average", average_analysis, did, didnt);
    write_analysis(cout, "median of homework turned in", optimistic_median_analysis,
                   did, didnt);



    return 0;
}

