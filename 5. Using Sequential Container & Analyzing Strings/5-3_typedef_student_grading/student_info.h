#ifndef STUDENT_INFO_H
#define STUDENT_INFO_H

// Student_info.h header file
#include <iostream>
#include <string>
#include <vector>
#include <list>


struct Student_info
{
    std::string name;
    double midterm;
    double final;
    std::vector<double> homework;
};

//typedef std::vector<Student_info> contType;
typedef std::list<Student_info> contType;


bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);


// predicate to determine whether a student failed
bool fgrade(const Student_info& s);

// version 3: iterators but no indexing; still potentially slow p. 82
contType extract_fails(contType students);

#endif // STUDENT_INFO_H
