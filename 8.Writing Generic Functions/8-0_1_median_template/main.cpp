// 8-0 Part 1
// Median Function as a template function

#include <iostream>
#include <vector>
#include <mediantemplate.h>


using namespace std;

int main()
{
    int iArray[10] = { 43, 23, 94, 54, 23, 3323, 5543, 49832, 483, 49};
    double dAr[10] = { 3.4, 98.34, 54.321, 395.4, 9.69, 8.05, 84.78, 57.45, 85.9, 90.23};

    vector<int> ivec( iArray, iArray + 10);
    vector<double> dvec( dAr, dAr + 10);


    // Display
    cout << endl;
    cout << "int median: " <<  median(ivec) << endl;

    cout << "double median: " << median(dvec) << endl;
    cout << endl;
    cout << endl;

    int first = 7;
    int second = 9;
    cout << "Max:" << endl;
    cout << mx(first, second) << endl;
    cout << mx(34.9, 5.66) << endl;



    return 0;
}

