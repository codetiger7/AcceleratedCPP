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

    v_sz size = valueSet.size();

    v_sz p1 = 0;
    v_sz p2 = 0;
    v_sz p3 = 0;
    v_sz p4 = 0;

    int check = size % 4;
    int div = size / 4;


    /// Ownage!
    switch(check)
    {
    case 0:
        p1 = div * 1;
        p2 = div * 2;
        p3 = div * 3;
        p4 = div * 4;
        break;
    case 1:
        p1 = div * 1 + 1;
        p2 = div * 2 + 1;
        p3 = div * 3 + 1;
        break;
    case 2:
        p1 = div * 1 + 1;
        p2 = div * 2 + 2;
        p3 = div * 3 + 2;
        p4 = div * 4 + 2;
        break;
    case 3:
        p1 = div * 1 + 1;
        p2 = div * 2 + 2;
        p3 = div * 3 + 3;
        p4 = div * 4 + 3;
        break;
   default:
        break;
    }


    if( p4 > valueSet.size())
    {
        cout << "wrong calculation of quartile 4" << endl;
        return 2;
    }


    /// q1
    cout << "Q1: ";
    for( v_sz i = 0; i != p1; ++i )
        cout << valueSet[i] << " ";

    /// q2
    cout << endl << "Q2: ";
    for( v_sz i = p1; i != p2; ++i )
        cout << valueSet[i] << " ";

    /// Q3
    cout << endl << "Q3: ";
    for( v_sz i = p2; i != p3; ++i )
        cout << valueSet[i] << " ";

    /// Q4
    cout << endl << "Q4: ";
    for( v_sz i = p3; i != valueSet.size(); ++i )
        cout << valueSet[i] << " ";


    cout << endl;



    return 0;
}

