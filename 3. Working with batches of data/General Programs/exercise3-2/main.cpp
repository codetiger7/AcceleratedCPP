#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // prompt and value storage
    cout << "Please enter your integer values: ";
    vector<int> v;
    int value;

    // read in values
    while(cin >> value)
    {
        v.push_back(value);
    }

    // store number of values
    typedef vector<int>::size_type v_size;
    v_size size = v.size();

    // check if more than 0 values are entered
    if (size == 0)
    {
      cout << "No integers entered, please start program again and enter values" << endl;
      return 1;
    }
    else if (size == 1)
    {
        cout << "All quartiles are 1" << endl;
        return 0;
    }
    else
    {
        sort(v.begin(), v.end());
    }

    // store quartiles
    v_size sizeMod4 = size % 4;
    double q1 = 0.0;
    double q2 = 0.0;
    double q3 = 0.0;
    v_size mid = size/2;

    string datum;

    // quartiles for 4 known patters

    // if divisible by 4
    if( sizeMod4 == 0)
    {
        datum = "[0, 0, 0]";

        q2 = (v[mid]+v[mid-1])/2.0;

        int midq1 = mid/2;
        q1 = (v[midq1] + v[midq1-1])/2.0;

        int midq2 = (mid + v.size())/2;
        q3 = (v[midq2]+v[midq2-1])/2.0;

    }
    else if(sizeMod4 == 1)
    {

    }


    cout << "q1: " << q1 << endl;
    cout << "q2: " << q2 << endl;
    cout << "q3: " << q3 << endl;

    return 0;
}

