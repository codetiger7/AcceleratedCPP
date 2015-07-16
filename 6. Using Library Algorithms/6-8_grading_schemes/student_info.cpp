// source file for Student_info-related functions

#include <student_info.h>
#include <grade.h>
#include <fstream>

using std::istream;
using std::vector;
using std::fstream;



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
