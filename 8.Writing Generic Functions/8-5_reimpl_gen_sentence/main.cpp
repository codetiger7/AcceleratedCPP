// 8-5
// Reimplement the gen_sentence and xref functions from Chapter 7 to use output iterators
// rather than putting their entire output in one data structure.
//
// Test these new versions by writing programs that attach the output iterator directly to the standard output,
// and by storing the results in a
// list<string>, and a map<string, vector<int> >, respectively

#include <rexref.hpp>
#include <split.h>
#include <xref.h>

#include <fstream>
#include <iostream>
#include <map>
#include <ostream>
#include <vector>

using namespace std;

int main()
{


    cout << endl << endl;
    ifstream in("x.txt");

    map<string, vector<int> > text = xref(in);

    map<string, vector<int> >::const_iterator it = text.begin();
    while (it != text.end())
    {
        cout << it->first << ": ";
        vector<int> v = it->second;
        vector<int>::const_iterator vit = v.begin();
        while( vit != v.end())
        {
            cout << *vit << " ";
            ++vit;
        }
        cout << endl;

        ++it;
    }

    cout << endl << endl;


    cout << "Output iterator Test: =========================================" << endl;

    in.close();
    ifstream in2("x.txt");
    rexref(in2, ostream_iterator<string>(cout, " "), split);







    return 0;
}

