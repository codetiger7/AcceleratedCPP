// 8-0
// Part 7:
// Binary Search Template
#include <binarysearch.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    typedef vector<int>::size_type sz;

    sz size = 10;

    for(sz i = 0; i != size; ++i)
        v.push_back(i);


    cout << endl << endl
         << "14 true/false: " << local::binary_search(v.begin(), v.end(), 14) << endl;

    cout << endl << "8 true/false: " << local::binary_search(v.begin(), v.end(), 8) << endl;
    return 0;
}

