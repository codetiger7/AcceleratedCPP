
// stl
#include <numeric>
#include <stdexcept>

// prod
#include <analysis.hpp>
#include <grade.h>
#include <median.h>
#include <student_info.h>

using namespace std;


bool did_all_hw(const Student_info& s)
{
    return ((find(s.homework.begin(), s.homework.end(), 0))
            == s.homework.end());
}

double grade_aux(const Student_info& s)
{
    try
    {
        return grade(s);
    }
    catch(domain_error)
    {
        return grade(s.midterm, s.final, 0);
    }
}

double average(const vector<double>& v)
{
    return accumulate( v.begin(), v.end(), 0.0 ) / v.size();
}

double average_grade(const Student_info& s)
{
    return grade(s.midterm, s.final, average(s.homework));
}

// median of the nonzero elements of s.homework, or 0 if no such element
double optimistic_median(const Student_info& s)
{
    vector<double> nonzero;

    remove_copy(s.homework.begin(), s.homework.end(), back_inserter(nonzero), 0);

    if (nonzero.empty())
        return grade(s.midterm, s.final, 0);
    else
        return grade(s.midterm, s.final, median(nonzero));
}
