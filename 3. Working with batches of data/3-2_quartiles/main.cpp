/// 3-2
/// Quartiles
/// compute and print the quartiles
/// id est, the quarter of the numbers with the largest values, the next highest quarter
/// and so on
/// of a set of integers
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    /// prompt user for set of values for quartiles
    cout << "Please enter a series of no fewer than 4 numbers: ";
    vector<int> valueSet;
    int num;

    /// store values entered
    /// invariant: valueSet.size() numbers have been entered
    while(cin >> num )
    {
        valueSet.push_back(num);
    }

    /// check if insufficient data has been entered
    if (valueSet.size() < 4)
    {
        cout << "Sorry you have entered less than 4 numbers, please try again" << endl;
        return 1;
    }


    /// sort value set in non-decreasing order
    sort(valueSet.begin(), valueSet.end() );

    /// divide set in half
    typedef vector<int>::size_type v_sz;

    v_sz middle = valueSet.size() % 2 == 0 ? (valueSet.size()/2 )   /// if even one ahead of mid
                                           : valueSet.size()/2 + 1 ;     ///   if odd middle

    v_sz q1 = middle % 2 == 0 ? middle / 2 : middle/2 + 1; /// prev even, now middle, prev odd,
    v_sz q2 = valueSet.size() % 2 == 0 ?  middle + 1 : middle;
    v_sz q4 = (middle + valueSet.size()) % 2 == 0 ? (middle + valueSet.size())/2 - 1
                                                  : (middle + valueSet.size())/2;

    if( q4 > valueSet.size())
    {
        cout << "wrong calculation of quartile 4" << endl;
        return 2;
    }


    /// q1
    cout << "Q1: ";
    for( v_sz i = 0; i != q1; ++i )
        cout << valueSet[i] << " ";

    /// q2
    cout << endl << "Q2: ";
    for( v_sz i = q1; i != q2; ++i )
        cout << valueSet[i] << " ";

    /// Q3
    cout << endl << "Q3: ";
    for( v_sz i = q2; i != q4; ++i )
        cout << valueSet[i] << " ";

    /// Q4
    cout << endl << "Q4: ";
    for( v_sz i = q4; i != valueSet.size(); ++i )
        cout << valueSet[i] << " ";


    cout << endl;



    return 0;
}

