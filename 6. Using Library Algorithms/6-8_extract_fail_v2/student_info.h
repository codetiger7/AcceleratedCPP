#ifndef STUDENT_INFO_H
#define STUDENT_INFO_H

// Student_info.h header file
#include <iostream>
#include <string>
#include <vector>

struct Student_info
{
    std::string name;
    double midterm;
    double final;
    std::vector<double> homework;
};

void changeMinPass(int n);

bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream &, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);


// predicate to determine whether a student failed
bool fgrade(const Student_info& s);
bool pgrade(const Student_info& s);

// version 3: iterators but no indexing; still potentially slow p. 82
//std::vector<Student_info> extract_fails(std::vector<Student_info>& students);
std::vector<Student_info>extract_fails2(std::vector<Student_info>& students, int pass);
std::vector<Student_info> classify(std::vector<Student_info>& students);

bool checkChar(Student_info& s);

void printingResults(const std::vector<Student_info>& students, std::string::size_type maxlen);

#endif // STUDENT_INFO_H
