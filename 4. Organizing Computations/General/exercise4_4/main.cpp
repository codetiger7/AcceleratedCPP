// calculate the squares of int values up to 100
// write two colums: the first lists the value; the second contains the square of that value
// use setw, to manage the output so that the values line up in columns

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

double squared(double value);

//int valSize(double value);

int sqValueSize( double sqvalue);



int main()
{

    double value = 13233.237;
    double sqvalue = value * value;

    // setwidth for value and squared value
    //string::size_type vSize = valSize(value);
    string::size_type sqvSize = sqValueSize(sqvalue);

    cout << "value:   square:" << endl;

    for(double i = 0; i <= value; i += 1.4 )
    {
        cout << i << setw(sqvSize + 3) << squared(i) << endl;
    }
    return 0;

}

int sqValueSize(double sqvalue)
{
    string sqval;
    sqval = to_string(sqvalue);

    return sqval.size();
}

//int valSize(double value)
//{
//    string val;
//    val = to_string(value);

//    return val.size();
//}


double squared(double value)
{
    return value * value;
}
