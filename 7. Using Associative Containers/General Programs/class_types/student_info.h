#include <string>
#include <vector>
#include <iostream>

class Student_info
{

public:
    /// interface
    std::istream& read(std::istream&);
    double grade() const;
    std::string name() const {return n;}


private:
    /// implementation
    std::string n;
    double midterm;
    double final;
    std::vector<double> homework;


};


bool compare(const Student_info&, const Student_info&);
