#include <string>
#include <core.h>

using namespace std;




Core::Core() : midterm(0), final(0)
{

}

Core::Core(istream& is)
{
    read(is);
}

string
Core::name() const
{
    return n;
}

double
Core::grade() const
{
    return ::grade(midterm, final, homework);
}

istream&
Core::read_common(istream& in)
{
    /// read and store the student's name and exam grades
    in >> n >> midterm >> final;
    return in;
}

istream&
Core::read(istream& in)
{
    read_common(in);
    read_hw(in, homework);
    return in;
}

