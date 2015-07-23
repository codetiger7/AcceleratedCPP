// 10-0
// 10.1.3 Arrays
// p. 174

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const size_t NDim = 3;
    double coords[NDim] = {};
    *coords = 1.5;

    vector<double> v;
    copy(coords, coords + NDim, back_inserter(v));


    cout << endl;
    typedef vector<double>::size_type v_sz;

    for( v_sz i = 0; i != v.size(); ++i)
        cout << v[i] << " ";

    cout << endl << endl;

    vector<double> itv(coords, coords + NDim);


    return 0;
}

