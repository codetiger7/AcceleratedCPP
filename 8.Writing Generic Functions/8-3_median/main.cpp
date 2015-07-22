// 8-3
// median function without copying container

#include <algorithm>
#include <iostream>
#include <vector>

#include <median.h>

using namespace std;

int main()
{
    double a[] = { 3, 4, 5, 6, 7, 8, 9 };
    double b[] = { 2, 4, 6, 8};

    vector<double> iv(a, a + 7);
    vector<double> ib(b, b + 7);


    //
    double m = median(iv.begin(), iv.end());
    double n = median(iv.begin(), ib.end());

    cout << "\nThis is the median: " << m << endl << endl;

    cout << "\nThis is the median: " << n << endl << endl;




    return 0;
}

