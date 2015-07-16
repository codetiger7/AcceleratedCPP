
#include <framing.h>
#include <vector>
#include <string>
#include <algorithm>
#include <stdexcept>

using std::vector;
using std::string;
using std::max;
using std::domain_error;

vector<string> frame(const vector<string> &v)
{
    vector<string> ret;
    string::size_type maxlen = width(v);
    string border(maxlen + 4, '*');

    // write top border
    ret.push_back(border);

    // write each interior row
    for ( vector<string>::size_type i = 0; i != v.size(); ++i)
    {
        ret.push_back("* " + v[i] + string(maxlen - v[i].size(), ' ') + " *" );
    }

    // write the bottom border
    ret.push_back(border);

    return ret;
}


vector<string> center(const vector<std::string> &v)
{
    vector<string> ret;
    typedef string::size_type ssz;
    ssz maxlen = width(v);
    string border(maxlen + 4, '*');

    ret.push_back(border);
    for ( vector<string>::size_type i = 0; i != v.size(); ++i)
    {
        if(v.size() < 1)
            throw domain_error("vector must contain elements");

        ssz spaces = maxlen - v[i].size();
        ssz mid = spaces / 2;
        string sentence  = "* " + string(mid, ' ') + v[i];

        while(sentence.size() != border.size()-2)
            sentence += " ";

        sentence += " *";
        ret.push_back(sentence);
    }

    ret.push_back(border);

    return ret;
}


string::size_type width(const vector<string> &v)
{
    string::size_type maxlen = 0;
    for( vector<string>::size_type i = 0; i != v.size(); ++i )
    {
        maxlen = max(maxlen, v[i].size());
    }

    return maxlen;

}
