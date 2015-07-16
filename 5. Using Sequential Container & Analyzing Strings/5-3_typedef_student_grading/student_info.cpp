// source file for Student_info-related functions

#include <student_info.h>
#include <grade.h>

using std::istream;
using std::vector;
using std::list;


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


contType extract_fails(contType students)
{
    contType fail;
    contType::iterator iter = students.begin();

    while( iter != students.end())
    {
        if ( fgrade(*iter))
        {
            fail.push_back(*iter);
            iter = students.erase(iter);
        }
        else
        {
            ++iter;
        }

    }

    return fail;
}
