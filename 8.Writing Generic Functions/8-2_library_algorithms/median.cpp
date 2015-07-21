#include <algorithm>
#include <vector>

#include <median.h>

using std::sort;
using std::vector;

double median(vector<double> v)
{
    sort(v.begin(), v.end());

    typedef vector<double>::size_type v_sz;
    v_sz size = v.size();
    v_sz mid = size / 2;

    return size % 2 == 0 ? (v[mid] + v[mid-1])/2 : v[mid];
}
