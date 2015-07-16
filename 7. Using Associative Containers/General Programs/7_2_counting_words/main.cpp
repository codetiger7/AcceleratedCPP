// 7.2 Counting Words p. 124
/// count the number of times that each specific word is entered
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    string s;
    map<string, int> counters;      // stoe each word and an associated container

    // read the input, keeping track of each word and how often we see it
    while(cin >> s)
        ++counters[s];

    // write the words and associated counts
    typedef map<string, int>::const_iterator it;
    for(it beg = counters.begin(); beg != counters.end(); ++beg)
    {
        cout << beg->first << "\t" << beg->second << endl;
    }

    return 0;
}

