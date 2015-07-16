// exercise 4-2
// calculate the squares of int values up to 100
// write two colums: the first lists the value; the second contains the square of that value
// use setw, to manage the output so that the values line up in columns

#include <iostream>
#include <iomanip>


using namespace std;

int squared(int value);

int main()
{
    cout << "value:   square:" << endl;

    for(int i = 0; i != 101; ++i )
    {
        cout << setw(5) << i << setw(10) << squared(i) << endl;
    }
    return 0;
}





int squared(int value)
{
    return value * value;
}
