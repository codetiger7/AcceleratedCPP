/// 2-8
/// generate product of the number in the range [1, 10)
///
#include <iostream>

using namespace std;

int main()
{
    int product = 1;


    for( int i = 1; i != 10; ++i)
    {
        product *= i;
    }


    cout << "\n\nProduct of the numbers [1, 10) is: " << product << endl << endl;


    return 0;
}

