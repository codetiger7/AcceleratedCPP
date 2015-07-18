// 8-0
// Part 5: replace()
// algorithm header

#include <iostream>
#include <replace.h>
#include <vector>
using namespace std;


int main()
{
    int array[18] = { 2, 4, 3, 3, 2, 2, 2, 2, 4, 3, 4, 3, 2, 3, 2, 4, 2, 2 };
    vector<int> varray( array, array + 18);

    local::replace(varray.begin(), varray.end(), 2, 777);

    vector<int>::const_iterator it = varray.begin();
    while ( it != varray.end())
    {
        cout << *it << " ";
        ++it;
    }

    cout << endl << endl;
    return 0;
}

