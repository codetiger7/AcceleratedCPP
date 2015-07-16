/// 3-4
/// Program reports length of shortes/longest string

#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <limits>
using namespace std;

int main()
{

    /// Promt user for input
    cout << "Please type in strings: ";

    string strValue;
    string maxSizeTemp;
    string::size_type shortest = maxSizeTemp.string::max_size();
    string::size_type longest = 0;

    while( cin >> strValue )
    {
        shortest = min( shortest, strValue.size());
        longest = max(longest, strValue.size());
    }


    /// report length
    cout << "Shortest: " << shortest << endl;
    cout << "Longest: " << longest << endl;

    return 0;
}

