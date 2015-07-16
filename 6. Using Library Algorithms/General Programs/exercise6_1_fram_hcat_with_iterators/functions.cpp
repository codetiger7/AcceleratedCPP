#include <vector>
#include <string>
#include <functions.h>

using std::string;
using std::vector;
using std::max;


string::size_type width(const vector<string>& v)
{
    string::size_type maxlen = 0;

    for(vector<string>::size_type i = 0; i != v.size(); ++i )
        maxlen = max(maxlen, v[i].size() );

    return maxlen;
}


vector<string> frame(const vector<string>& v)
{
    vector<string> ret;
    string::size_type maxlen = width(v);
    string border(maxlen + 4, '*');

    // write top border
    ret.push_back(border);

    // iterator
    vector<string>::const_iterator beg = v.begin();

    // write each interior row, bordered by an asterisk and a space
    while(beg != v.end() )
    {
        ret.push_back("* " + *beg + string(maxlen - beg->size(), ' ') + " *");
        ++beg;
    }

    // write the bottom border
    ret.push_back(border);

    return ret;
}

vector<string> hcat( const vector<string>& left, const vector<string>& right)
{
    vector<string> ret;

    // add 1 to leave a space between pictures
    string::size_type width1 = width(left) + 1;

    // indices to look at elements from left and reight respectively
//    vector<string>::size_type i = 0;
//    vector<string>::size_type j = 0;

    vector<string>::const_iterator i = left.begin();
    vector<string>::const_iterator j = right.begin();

    // continue until we've seen all rows from both pictures
    while( i != left.end() || j != right.end() )
    {
        // construct new string for characters from both pictures
        string s;

        // copy a row from the left-hand side, if there is one
        if( i != left.end() )
            s =  *i++;    //left[i++];
        // pad to full width
        s += string(width1 - s.size(), ' ');

        // copy a row from the righ-hand side, if one
        if( j != right.end())
            s +=  *j++; //right[j++];

        // add s to the picture we are creating
        ret.push_back(s);
    }

    return ret;
}
