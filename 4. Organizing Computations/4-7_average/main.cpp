/// 4-7
///
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    /// prompt for input
    cout << "Please enter values: ";

    /// store input
    vector<double> values;
    double val;

    while(cin >> val)
        values.push_back(val);

    /// print average of numbers
    cout << accumulate(values.begin(), values.end(), 0.0) / values.size() << endl;




    return 0;
}

