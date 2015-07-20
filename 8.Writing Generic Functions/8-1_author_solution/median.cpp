
#include <median.h>
#include <stdexcept>

using std::domain_error;
using std::vector;

double median(vector<double> vec)
{
    typedef vector<double>::size_type vec_sz;

    vec_sz size = vec.size();

    if (vec.empty())
        throw domain_error("median of an empty vector");

    sort( vec.begin(), vec.end() );

    vec_sz mid = size / 2;

    return size % 2 == 0 ? (vec[mid] + vec[mid-1])/2 : vec[mid];
}

