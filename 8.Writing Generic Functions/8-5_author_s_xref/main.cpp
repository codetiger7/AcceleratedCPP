#include <iterator>
#include <iostream>
#include <map>
#include <fstream>
#include <string>


#include <../8-5_author_solution/split.h>

//#include <split.h>
#include <xref-utils.hpp>

using namespace std;

int main()
{


    // open and connect file to ostream
    ifstream inFile("x.txt");

    if (!inFile)
        cerr << "\n\n\nFILE NOT OPEN!!!!!" << endl << endl;


    // call xref
    map<string, vector<int> > ret;
    xref(inFile, split, inserter(ret, ret.begin()) );





    // write the results
    typedef map<string, vector<int> >::const_iterator c_it;
    for(c_it it = ret.begin(); it != ret.end(); ++it)
    {
        // write the word
        cout << it->first << " occurs on line(s): ";

        // followed by one or more line numbers
        vector<int>::const_iterator line_it = it->second.begin();
        cout << *line_it; // write the first line number

        ++line_it;

        // write the rest of the line numbers, if any
        while (line_it != it->second.end())
        {
            cout << ", " << *line_it;
            ++line_it;
        }

        // write a new line to separate each wrod from the next
        cout << endl;
    }


    return 0;
}

