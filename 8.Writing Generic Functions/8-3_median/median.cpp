#include <algorithm>
#include <vector>

#include <median.h>

using std::sort;
using std::vector;

double median(vector<double>::iterator b, vector<double>::iterator e)
{
    sort(b, e);

    typedef vector<double>::size_type v_sz;

    v_sz size = e - b;
    v_sz mid = size / 2;

    // spin iter until valu
    return size % 2 == 0 ? (b[mid] + b[mid-1])/2 : b[mid];
}
