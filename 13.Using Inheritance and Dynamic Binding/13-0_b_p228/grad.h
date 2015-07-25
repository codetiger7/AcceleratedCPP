#ifndef GRAD
#define GRAD

#include <core.h>

#include <algorithm>
#include <iostream>

using std::istream;
using std::min;


class Grad : public Core
{
public:
    Grad() : thesis(0) { }
    Grad(std::istream& is) { read(is); }
    double grade() const
    {
        return min(Core::grade(), thesis);
    }
    std::istream& read(std::istream& in)
    {
        read_common(in);
        in >> thesis;
        read_hw(in, homework);
        return in;
    }


private:
    double thesis;\
};

#endif // GRAD

