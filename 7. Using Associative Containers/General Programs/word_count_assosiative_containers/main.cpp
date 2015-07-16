/// Counting how many times a word occurs using associative containers
/// Accelerated C++, Chap 7. page. 124
#include <iostream>
#include <map>
#include <string>

using namespace std;


int main()
{
    string s;
    map<string, int> counters; /// store each word and an associated counter

    /// read the input, keeping track of each word and how often we see it
    while(cin >> s)
    {
        ++counters[s];
    }



    /// write the words and associated counts
    typedef map<string, int>::const_iterator const_it;

    for(const_it it = counters.begin(); it != counters.end(); ++it )
    {

        cout << it->first << "\t" << it->second << endl;
    }



    return 0;
}

