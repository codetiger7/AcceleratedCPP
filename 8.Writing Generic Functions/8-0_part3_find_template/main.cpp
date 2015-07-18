#include <iostream>
#include <find.h>

using namespace std;

int main()
{

    string tString = "How are you today?";
    char c = 'u';
    char d = 'd';

    string::const_iterator sIt = fnd(tString.begin(), tString.end(), c);
    string::const_iterator sIt2 = fnd2(tString.begin(), tString.end(), d);


    cout << "Found these characters: " << endl;
    cout << "sIt: " << *sIt << endl;
    cout << "sIt2: " << *sIt2 << endl;

    return 0;
}

