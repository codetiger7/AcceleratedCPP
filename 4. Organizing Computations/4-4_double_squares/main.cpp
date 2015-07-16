/// 4-4
/// Use doubles instead of ints
#include <iostream>
#include <iomanip>      /// setw
#include <ios>
#include <cmath>
using namespace std;

int main()
{
    int value = 100000000;
    int width = 0;

    int tempVal = value;
    do
    {
        width+=2;
        tempVal /= 10;

    }while(tempVal);

    if(width < 8)
        width = 8;

    cout << setw(width) << "Value:" << setw(width*2) << "Square:" << endl;

    for( double i = 1.0; i < value; i += 0.1)
    {
        cout << setprecision(2) << fixed << setw(width) << i
                                         << setw(width*2) << i * i << endl;
    }

    return 0;
}

