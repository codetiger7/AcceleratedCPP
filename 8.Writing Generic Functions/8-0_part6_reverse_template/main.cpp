// 8-0
// Part 6: reverse template

#include <iostream>
#include <reverse.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    vector<int>::size_type size = 10;

    typedef vector<int>::size_type v_sz;
    for( v_sz i = 0; i != size; ++i)
    {
        v.push_back(i);
    }

    cout << endl << endl;

    for( v_sz j = 0; j != size; ++j)
        cout << v[j] << " ";

    local::reverse(v.begin(), v.end());


    cout << endl << endl;

    for( v_sz j = 0; j != size; ++j)
        cout << v[j] << " ";

    cout << endl;

    return 0;
}

