#include <string>
#include <iostream>
#include <vector>


class Core
{
public:
    Core();
    Core(std::istream&);

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

bool
compare_grades(const Core& c1, const Core& c2)
{
    return c1.grade() < c2.grade();
}
