
// source file for Student_info related functions
#include <student_info.h>

using std::istream;
using std::vector;

bool compare( const Student_info& x, const Student_info& y)
{
    return x.name < y.name;
}

istream& read(istream& is, Student_info& s)
{
    // page 62

    // read and store the student's name, midterm, and final exam grades
    is >> s.name >> s.midterm >> s.final;

    read_hw(is, s.homework);        //  read and store all the student's homework grades

    return is;
}


// read homework grades from an input stream into a vector<double>
istream& read_hw(istream& in, vector<double>& hw)
{
    // page 57
    if (in)
    {
        // get rid of previous content
        hw.clear();

        // read homework grades
        double x;
        while (in >> x)
            hw.push_back(x);

        // clear the stream so that input will work for the next student
        in.clear();
    }

    return in;
}

