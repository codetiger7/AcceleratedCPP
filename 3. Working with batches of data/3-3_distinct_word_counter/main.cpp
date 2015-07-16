/// 3-3
/// Program counts how many times
/// each distinct word appears in  input
#include <iostream>
#include <map>
using namespace std;

int main()
{
    /// promt user for word
    cout << "Please enter all the words you want: ";

    /// read input
    map<string, int> wordCounter;
    string word;

    while( cin >> word)
    {
        ++wordCounter[word];
    }

    /// Output words and times they have been entered
    cout << "Word:\tCount:" << endl << endl;

    typedef map<string, int>::iterator c_it;
    c_it beg = wordCounter.begin();

    while( beg != wordCounter.end() )
    {
        cout << beg->first << "\t" << beg->second << endl;

        ++beg;
    }



    return 0;
}

