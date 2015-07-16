// exercise 4-2
// calculate the squares of int values up to 100
// write two colums: the first lists the value; the second contains the square of that value
// use setw, to manage the output so that the values line up in columns

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int squared(int value);

int valSize(int value);

int sqValueSize( int sqvalue);



int main()
{

    int value = 100;
    int sqvalue = value * value;

    // setwidth for value and squared value
    string::size_type vSize = valSize(value);
    string::size_type sqvSize = sqValueSize(sqvalue);

    cout << "value:   square:" << endl;

    for(int i = 0; i != value; ++i )
    {
        cout << i << setw(sqvSize + 3) << squared(i) << endl;
    }
    return 0;

}

int sqValueSize( int sqvalue)
{
    string sqval;
    sqval = to_string(sqvalue);

    return sqval.size();
}

int valSize(int value)
{
    string val;
    val = to_string(value);

    return val.size();
}


int squared(int value)
{
    return value * value;
}
