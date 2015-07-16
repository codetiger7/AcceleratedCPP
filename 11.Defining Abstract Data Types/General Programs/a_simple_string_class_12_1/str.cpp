#include "str.h"


Str&
Str::operator+=(const Str& s)
{
    std::copy( s.data.begin(), s.data.end(), std::back_inserter(data));
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Str& s)
{
    for( Str::size_type i = 0; i != s.size(); ++i)
    {
        os << s[i];
    }

    return os;
}

/// wont compile quite yet
istream& operator>>(istream& is, Str& s)
{
    /// obliterate existing value(s)
    s.data.clear();     /// compile error data is private

    /// read and discard leading whitespace
    char c;

    while( is.get(c) && isspace(c))
        ;

    /// if still something to read do so until next whitespace character
    if (is)
    {
        do
        {
            s.data.push_back(c);        /// compile error data is private
        } while(is.get(c) && !isspace(c));

        /// if we read whitespace, then put it back on the stream
        if(is)
        {
            is.unget();
        }
    }

    return is;
}


Str operator+(const Str& s, const Str& t)
{
    Str r = s;
    r += t;
    return r;
}

