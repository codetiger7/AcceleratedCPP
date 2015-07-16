#include <horizontal_cat.h>
#include <vector>
#include <string>
#include <fun.h>


using std::vector;
using std::string;

std::vector<std::string>
hcat(const std::vector<std::string>& left, const std::vector<std::string>& right )
{
    vector<string> ret;

    /// add 1 to leave a space between pictures
    string::size_type width1 = width(left) + 1;

    /// indices to look at elements from left and right respectively
    typedef vector<string>::size_type v_sz;
    v_sz i = 0;
    v_sz j = 0;

    /// continue until we've seen all rows from both pictures
    while( i != left.size() ||  j != right.size() )
    {
        /// construct new string to hold characters from both pictures
        string s;

        /// copy a row from left-hand side, if there is one
        if ( i != left.size())
            s = left[i++];

        /// pad to full width
        s += string(width1 - s.size(), ' ');

        /// copy a row from the right-hand side, if there is one
        if ( j != right.size())
            s += right[j++];

        /// add s to the picture we're creating
        ret.push_back(s);
    }

    return ret;
}

