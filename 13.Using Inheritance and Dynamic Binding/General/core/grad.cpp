
#include <grad.h>
#include <algorithm>

using namespace std;


Grad::Grad() : thesis(0)
{

}

Grad::Grad(istream& is)
{
    read(is);
}

istream&
Grad::read(istream& in)
{
    read_common(in);
    in >> thesis;
    read_hw(in, homeowrk);
    return in;
}

double
Grad::grade() const
{
    return min(Core::grade(), thesis);
}

bool compare_grades(const Core &c1, const Core &c2)
{
    return c1.grade() < c2.grade();
}
