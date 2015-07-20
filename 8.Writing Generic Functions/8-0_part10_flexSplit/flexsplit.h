#ifndef FLEXSPLIT_H
#define FLEXSPLIT_H

#include <string>
#include <cctype>

using std::string;
using std::isspace;

bool not_space(char c);
bool space(char c);

template <class Out>                         // changed
void split(const string& str, Out os)        // changed
{
    typedef string::const_iterator iter;

    iter i = str.begin();
    while (i != str.end())
    {
        // ignore leading blanks
        i = find_if(i, str.end(), not_space);

        // find end of next word
        iter j = find_if(i, str.end(), space);

        // copy the characters in [i , j)
        if (i != str.end())
            *os++ = string(i, j);            // changed

        i = j;
    }
}



bool space(char c)
{
    return isspace(c);
}

bool not_space(char c)
{
    return !isspace(c);
}

#endif // FLEXSPLIT_H
