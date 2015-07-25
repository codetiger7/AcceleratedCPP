#ifndef CORE
#define CORE

#include <iostream>
#include <string>
#include <vector>

class Core
{
public:
    Core();
    Core(std::istream&);
    std::string name() const;
    std::istream& read(std::istream&);
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

