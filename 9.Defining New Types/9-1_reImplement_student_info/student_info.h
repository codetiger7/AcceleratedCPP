#ifndef STUDENT_INFO_H
#define STUDENT_INFO_H

#include <string>
#include <vector>

class Student_info
{
public:

    // constructors:
    Student_info() : midterm_(0.0), final_(0.0) { }
    Student_info(std::istream& is) { read(is); }

    // functions:
    bool valid() const { return !homework.empty(); }
    std::istream& read(std::istream&);
    double grade() const;



private:
    std::string name_;
    double midterm_;
    double final_;
    std::vector<double> homework;
};

#endif // STUDENT_INFO_H
