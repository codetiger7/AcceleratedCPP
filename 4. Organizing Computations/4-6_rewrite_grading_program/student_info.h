#ifndef STUDENT_INFO_H
#define STUDENT_INFO_H

/// student_info.h header file
#include <iostream>
#include <string>
#include <vector>

struct Student_info
{
    std::string name;
    double midterm;
    double final;
    std::vector<double> homework;
    double result;
};

bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);


#endif // STUDENT_INFO_H
