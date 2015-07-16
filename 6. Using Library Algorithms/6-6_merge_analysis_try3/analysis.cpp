
#include <iostream>
#include <string>
#include <vector>
#include <student_info.h>
#include <grade.h>
#include <stdexcept>
#include <median.h>
#include <numeric>
#include <analysis.h>
using namespace std;



void write_a(ostream &out,
                    const string& name,
                    double aux(const Student_info& ),
                    const std::vector<Student_info>& did,
                    const std::vector<Student_info>& didnt)
{

    out << name << ":median(did) = "    << general_analysis(aux, did) <<
                   ", median(didnt) = " << general_analysis(aux, didnt) << endl;
}


void write_analysis(ostream&        out,
                    const string&   name,
                    double analysis(const vector<Student_info>&),
                    const vector<Student_info>& did,
                    const vector<Student_info>& didnt)
{
    out << name << ":median(did) = "    << analysis(did) <<
                   ", median(didnt) = " << analysis(didnt) << endl;
}








double grade_aux(const Student_info& s)
{
    try
    {
        return grade(s);
    }
    catch (domain_error)
    {
        return grade(s.midterm, s.final, 0);
    }
}

double average_grade(const Student_info& s)
{
    return grade(s.midterm, s.final, average(s.homework) );
}

double optimistic_median(const Student_info& s)
{
    vector<double> nonzero;

    remove_copy(s.homework.begin(), s.homework.end(), back_inserter(nonzero), 0);

    if (nonzero.empty())
        return grade(s.midterm, s.final, 0);
    else
        return grade(s.midterm, s.final, median(nonzero));
}







double average(const vector<double>& v)
{
    return accumulate(v.begin(), v.end(), 0.0) / v.size();
}
























double general_analysis(double aux(const Student_info& s), const vector<Student_info>& students)
{
    vector<double> grades;

    transform( students.begin(), students.end(), back_inserter(grades), aux);

    return median(grades);
}











// this version works fine
double median_analysis(const vector<Student_info>& students )
{
    vector<double> grades;

    transform(students.begin(), students.end(), back_inserter(grades), grade_aux);

    return median(grades);
}

double average_analysis(const vector<Student_info>& students)
{
    vector<double> grades;

    transform(students.begin(), students.end(), back_inserter(grades), average_grade);

    return median(grades);
}


double optimistic_median_analysis(const std::vector<Student_info> &students)
{
    vector<double> grades;

    transform(students.begin(), students.end(), back_inserter(grades), optimistic_median);

    return median(grades);

}









bool did_all_hw(const Student_info& s)
{
    return ((find(s.homework.begin(), s.homework.end(), 0)) == s.homework.end() );
}



