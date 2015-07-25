#include <core.h>
#include <grade.h>
#include <read_hw.h>

#include <iostream>
#include <string>

using std::string;
using std:: istream;

string Core::name() const
{
    return n;
}

double Core::grade() const
{
    return ::grade(midterm, final, homework);
}

istream& Core::read_common(istream& in)
{
    // read and store the student's name and exam grades
    in >> n >> midterm >> final;
    return in;
}

istream& Core::read(istream& in)
{
    read_common(in);
    read_hw(in, homework);
    return in;
}



