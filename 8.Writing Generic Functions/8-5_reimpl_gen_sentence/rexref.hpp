

#include <iterator>
#include <map>
#include <ostream>
#include <string>
#include <sstream>
#include <vector>

using std::map;
using std::string;
using std::vector;



// find all the lines that refer to each word in the input
template <class Istream, class Out, class Split>
void rexref(Istream in, Out os, Split spl )
{

    string line;
    int line_number = 0;
    map<string, vector<int> > ret;

    // read the next line
    while (getline(in, line))
    {
        ++line_number;

        // break the input line into words
        vector<string> words = spl(line);

        // remember that each word occurs on the current line
        for (vector<string>::const_iterator it = words.begin();
             it != words.end(); ++it)
        {
            ret[*it].push_back(line_number);

            std::stringstream ss;
            ss << line_number;
            string str = ss.str();

            *os++ = str;
        }
    }
}

