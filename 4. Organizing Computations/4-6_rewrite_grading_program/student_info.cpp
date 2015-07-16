
/// source file for student_info.h

#include <student_info.h>
#include <grade.h>

using std::istream;
using std::vector;
using std::cout;
using std::endl;


bool compare(const Student_info& x, const Student_info& y)
{
    return x.name < y.name;
}

istream& read(istream& is, Student_info& s)
{
    double midterm;
    double final;
    vector<double> homework;

    is >> s.name >> midterm >> final;

    if(!std::cin)
        return is;

    read_hw(is, homework);



    s.result = grade(midterm, final, homework);

    return is;
}

istream& read_hw(istream& in, vector<double>& hw)
{
    if (in)
    {
        hw.clear();

        double x;
        while(in >> x)
            hw.push_back(x);

        in.clear();
    }

    return in;
}


