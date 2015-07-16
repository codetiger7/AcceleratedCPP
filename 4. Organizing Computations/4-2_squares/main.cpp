/// 4-2
/// Program calculates squares of int values up to 100
/// Two columns, first lists value, second lists square ov value
/// use setw, to manage output into columns

#include <iostream>
#include <iomanip>      /// setw
#include <cmath>
using namespace std;

int main()
{
    cout << "Value:" << "   Square:" << endl;

    for( int i = 0; i != 100; ++i)
    {
        cout << setw(6)  << i+1
             << setw(10) << (i+1) * (i+1) << endl;
    }

    return 0;
}

