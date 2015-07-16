#include <fun.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string::size_type width(const std::vector<string>& v)
{
    string::size_type maxlen = 0;
    typedef vector<string>::size_type v_sz;

    for ( v_sz i = 0; i != v.size(); ++i)
    {
        maxlen = max(maxlen, v[i].size());
    }

    return maxlen;
}


vector<string> frame(const vector<string>& v)
{
    vector<string> ret;
    string::size_type maxlen = width(v);
    string border(maxlen + 4, '*');


    /// write the top border
    ret.push_back(border);

    /// write each interiror row, bordered by an asterisk and a space
    typedef vector<string>::size_type v_sz;

    for(v_sz i = 0; i != v.size(); ++i)
    {
        ret.push_back("* " + v[i] + string(maxlen-v[i].size(), ' ') + " *");
    }

    /// write the bottom border
    ret.push_back(border);

    return ret;
}


