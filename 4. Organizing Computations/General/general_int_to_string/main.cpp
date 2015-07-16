// testing making reading an int to string and printing the string length
#include <string>
#include <iostream>

using namespace std;

int main()
{

    // first test printing string length
    // should be length == 8, number : 10000000
    string number("10000000");

    cout << "string length: " << number.size() << endl;

    // same thing with int
    int intNum(10000000);

    string strNum = to_string(intNum);
    cout << "int length: " << strNum.size() << endl;


    return 0;
}

