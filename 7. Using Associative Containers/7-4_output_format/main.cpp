// 7.3 Generating a Cross-Reference Table p. 126
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <split.h>
using namespace std;

// find all the lines that refer to each word in the input
map<string, vector<int> >
xref(istream& in, vector<string> find_words(const string&) = split )
{
    string line;
    int line_number = 0;
    map<string, vector<int> > ret;

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
            ret[*it].push_back(line_number);
        }
    }

    return ret;
}




int main()
{
    // call xref using split by default
    map<string, vector<int> > ret = xref(cin);

    cout << endl << endl;
    // write the results
    typedef map<string, vector<int> >::const_iterator it;
    for (it i = ret.begin(); i != ret.end(); ++i)
    {
        // new line count
        int ncount = 0;
        // write the word
        cout << i->first << " occurs on line(s): ";
        cout << endl;

        // followed by one or more line numbers
        vector<int>::const_iterator line_it = i->second.begin();
        cout << *line_it;   // write the first line number

        ++line_it;
        ++ncount;
        // write the rest of the line numbers, if any
        while (line_it != i->second.end())
        {
            if( ncount % 10 != 0)
                cout << ", ";

            cout << *line_it;

            ++line_it;
            ++ncount;

            if( ncount % 10 == 0)
                cout << endl;


        }

        // write a new line to separate each word from the next
        cout << endl;
    }

    return 0;
}




