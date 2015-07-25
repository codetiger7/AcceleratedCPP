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
    double grade() const;

protected:
    std::istream& read_common(std::istream&);
    double midterm;
    double final;
    std::vector<double> homework;

private:
    std::string n;
};

#endif // CORE

