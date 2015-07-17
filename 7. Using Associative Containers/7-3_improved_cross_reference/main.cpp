// 7-3
// The cross-reference program from 7.3/126 could be improved
// NOW:
// if a word on a line appears more than once one the same input line
// line is reported multiple times
// change code so that it detects multiple occurences on the same line
// and insert these only once

// 7.3 Generating a Cross-Reference Table p. 126
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <split.h>
#include <set>

using namespace std;

// find all the lines that refer to each word in the input
map<string, set<int> >
xref(istream& in, vector<string> find_words(const string&) = split )
{
    string line;
    int line_number = 0;
   // map<string, vector<int> > ret;
    map<string, set<int> > ret;


    // read the next line
    while (getline(in, line))
    {
        ++line_number;

        // break the input into words
        vector<string> words = find_words(line);

        // remember that each word occurs on the current line
        for(vector<string>::const_iterator it  = words.begin();
            it != words.end(); ++it )
        {
            ret[*it].insert(line_number);
        }
    }

    return ret;
}




int main()
{
    // call xref using split by default
    map<string, set<int> > ret = xref(cin);

    // write the results
    typedef map<string, set<int> >::const_iterator it;
    for (it i = ret.begin(); i != ret.end(); ++i)
    {

        // write the word
        cout << i->first << " occurs on line(s): ";

        // followed by one or more line numbers
        set<int>::const_iterator line_it = i->second.begin();
        cout << *line_it;   // write the first line number

        ++line_it;
        // write the rest of the line numbers, if any
        while (line_it != i->second.end())
        {
            cout << ", " << *line_it;
            ++line_it;
        }

        // write a new line to separate each word from the next
        cout << endl;
    }

    return 0;
}




