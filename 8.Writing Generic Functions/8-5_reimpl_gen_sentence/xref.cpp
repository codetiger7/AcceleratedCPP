
#include <iterator>
#include <map>
#include <string>
#include <vector>

using std::map;
using std::string;
using std::vector;

#include <xref.h>


// find all the lines that refer to each word in the input
std::map<std::string, std::vector<int> >
xref(std::istream& in,
     vector<string> find_words(const std::string&) )
{

    string line;
    int line_number = 0;
    map<string, vector<int> > ret;

    // read the next line
    while (getline(in, line))
    {
        ++line_number;

        // break the input line into words
        vector<string> words = find_words(line);

        // remember that each word occurs on the current line
        for (vector<string>::const_iterator it = words.begin();
             it != words.end(); ++it)
        {
            ret[*it].push_back(line_number);
        }
    }

    return ret;
}
