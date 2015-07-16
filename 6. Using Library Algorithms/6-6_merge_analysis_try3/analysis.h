#ifndef ANALYSIS_H
#define ANALYSIS_H

#include <vector>
#include <string>
#include <student_info.h>
#include <iostream>
#include <grade.h>
#include <median.h>
#include <numeric>


void write_analysis(std::ostream& out,
                    const std::string& name,
                    double analysis(const std::vector<Student_info>&),
                    const std::vector<Student_info>& did,
                    const std::vector<Student_info>& didnt);

void write_a(std::ostream& out,
             const std::string& name,
             double aux(const Student_info& s),
             const std::vector<Student_info>& did,
             const std::vector<Student_info>& didnt);




double grade_aux(const Student_info& s);
double optimistic_median(const Student_info& s);


double general_analysis(double aux(const Student_info& s),
                        const std::vector<Student_info>& students);

double median_analysis(const std::vector<Student_info>& students );
double average_analysis(const std::vector<Student_info>& students);
double optimistic_median_analysis(const std::vector<Student_info>& students);



double average_grade(const Student_info& s);
double average(const std::vector<double>& v);




bool did_all_hw(const Student_info& s);



#endif // ANALYSIS_H
