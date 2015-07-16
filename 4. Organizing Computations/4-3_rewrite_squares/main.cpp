/// 4-3
/// Allow values up to but not including 1000
/// What happens if we do not change arguments to setw?
/// Seems to be working fine, because i gave extra space the first try
///
/// Make program more robust to allow changes to i, without adjusting setw;

#include <iostream>
#include <iomanip>      /// setw
#include <cmath>
using namespace std;

int main()
{
    int value = 1000;
    int width = 0;

    int tempVal = value;
    do
    {
        width+=2;
        tempVal /= 10;

    }while(tempVal);

    if(width < 6)
        width = 6;

    cout << setw(width) << "Value:" << setw(width+2) << "Square:" << endl;

    for( int i = 1; i != value; ++i)
    {
        cout << setw(width) << i
             << setw(width+2) << i * i << endl;
    }

    return 0;
}

