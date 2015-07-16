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
    return grade(s) < 60;
}




std::vector<Student_info>
extract_fails(std::vector<Student_info>& students)
{
    typedef vector<Student_info>::size_type sz;
    sz passed = 0;
    sz i = 0;

    while( i != students.size())
    {
        if ( !fgrade(students[i]))
        {
            students.insert(students.begin(), students[i]); // fixed at beginning
            i+=2;
            ++passed;
        }
        else
        {
            ++i;
        }

    }
    students.resize(passed);

    return students;
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














//std::vector<Student_info>
//extract_fails(std::vector<Student_info>& students)
//{
//    vector<Student_info> fail;
//    vector<Student_info>::iterator iter = students.begin();

//    while( iter != students.end())
//    {
//        if ( fgrade(*iter))
//        {
//            fail.push_back(*iter);
//            iter = students.erase(iter);
//        }
//        else
//        {
//            ++iter;
//        }

//    }

//    return fail;
//}
