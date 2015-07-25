#ifndef CORE
#define CORE


#include <iostream>
#include <string>
#include <vector>

class Core
{
public:
    Core() : midterm(0), final(0) { }
    Core(std::istream& is) { read(is); }

    std::string name() const;

    virtual std::istream& read(std::istream&);
    virtual double grade() const;

protected:
    std::istream& read_common(std::istream&);
    double midterm;
    double final;
    std::vector<double> homework;

private:
    std::string n;

};

bool compare(const Core&, const Core&);

#endif // CORE

