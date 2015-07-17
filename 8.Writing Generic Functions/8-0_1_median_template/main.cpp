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


    int imedian = median(ivec);
//    cout << endl;
//    cout << "int median: " << imedian << endl;

//    cout << "double median: " << median(dvec) << endl;

    return 0;
}

