#ifndef GRAD
#define GRAD

#include <core.h>

#include <algorithm>
#include <iostream>
#include <vector>



std::istream& read_hw(std::istream& in, std::vector<double>& hw);

class Grad : public Core
{
public:
    Grad() : thesis(0) { }
    Grad(std::istream& is) { read(is); }
    double grade() const
    {
        return std::min(Core::grade(), thesis);
    }
    std::istream& read(std::istream& in)
    {
        read_common(in);
        in >> thesis;
        read_hw(in, homework);
        return in;
    }
protected:
    Grad* clone() const { return new Grad(*this); }

private:
    double thesis;
};

#endif // GRAD

