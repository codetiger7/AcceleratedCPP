
#include <iostream>
#include <vector>


#include <find_if.hpp>
using namespace std;


bool is_negative(int n)
{
    return n < 0;
}

int main()
{
    int a[] = { 8, 3, 45, 29, 8, 20, 9, -3, 28, 23, 2, 22, 21, 49, -7, 94};
    vector<int> v(a, a + 18);

    vector<int>::const_iterator num = local::find_if(v.begin(), v.end(), is_negative);

    if ( num != v.end())
        cout << "\nFound negative number: " << *num << endl << endl;


    return 0;
}

