/// 2-9
/// program determines the largest of two numbers
#include <iostream>
using namespace std;

void larger(double num1, double num2);

int main()
{
    while(true)
    {
        /// prompt user
        cout << "Enter number to compare: ";

        /// get input
        double num1;
        double num2;
        cin >> num1 >> num2;

        /// print and
        /// calculate largest number
        larger(num1, num2);
    }

    return 0;
}

void larger(double num1, double num2)
{
    if ( num1 > num2)
        cout << num1 << " is larger than " << num2 << endl;
    else if (num2 > num1)
        cout << num2 << " is larger than " << num1 << endl;
    else
        cout << num1 << " and " << num2 << " are equal" << endl;

}
