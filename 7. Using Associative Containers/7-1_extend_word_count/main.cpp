// 7-1
// Extend the program to produce output sorted by occurence count
// In non decreasing order. All words that occur once, then all words that occur twice...

// Counting Words p. 124
// count the number of times that each specific word is entered
#include <iostream>
#include <map>
#include <string>
#include <box.h>
#include <vector>

using namespace std;

int main()
{
    string s;
    map<string, int> counters;      // store each word and an associated container
    vector<Box> vcounters;

    // read the input, keeping track of each word and how often we see it
    while(cin >> s)
        ++counters[s];



    // write the words and associated counts
    typedef map<string, int>::const_iterator it;
    for(it beg = counters.begin(); beg != counters.end(); ++beg)
    {
        Box b;
        b.word = beg->first;
        b.count = beg->second;

        vcounters.push_back(b);

        //cout << beg->first << "\t" << beg->second << endl;
    }

    sort(vcounters.begin(), vcounters.end(), compB);

    typedef vector<Box>::size_type sz_v;
    for(sz_v i = 0; i != vcounters.size(); ++i)
    {
        cout << vcounters[i].word << " " << vcounters[i].count << endl;
    }

    return 0;
}

