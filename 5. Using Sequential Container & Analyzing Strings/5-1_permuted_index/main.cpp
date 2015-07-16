#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <phelpers.h>

using namespace std;

int main()
{

    /// make some space from compilation messages
    cout << endl << endl;

    /// stores rotated strings
    vector<string> rotatedStrings;
    vector<Pline> permutatedIndex;

    /// material to rotate
    string line[] = { "the", "quick", "brown", "fox" };
    vector<string> text1(line, line + 4);

    /// make permutations of all sentences
    permutatedIndex = permutations(text1);


//    vector<string>::size_type i = 0;
//    for(; i != rotatedStrings.size(); ++i)
//        cout << rotatedStrings[i] << endl;

//    cout << endl;

    return 0;
}

