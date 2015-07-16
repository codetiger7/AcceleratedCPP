#include <func.h>
#include <vector>
#include <string>
#include <cctype>

using std::string;
using std::vector;


vector<string> split(const string& str)
{
    typedef string::const_iterator iter;
    vector<string> ret;

    iter i = str.begin();
    while (i != str.end())
    {
        // ignore leading blanks
        i = find_if(i, str.end(), not_space);

        // find end of next word
        iter j = find_if(i, str.end(), space);

        // copy characters in [i, j)
        if( i != str.end())
            ret.push_back(string(i, j));

        i = j;
    }

    return ret;
}








bool space(char c)
{
    return std::isspace(c);
}


bool not_space(char c)
{
    return !space(c);
}
