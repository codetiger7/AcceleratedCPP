#ifndef STR_H
#define STR_H

#include <vec.h>

class Str
{
public:
    typedef Vec<char>::size_type size_type;
    // default constructor; create an empty Str
    Str() { }

    // create a Str containing n copies of c
    Str(size_type n, char c) : data(n, c) { }

    // create a Str from a null-terminated array of char
    Str(const char* cp)
    {
        std::copy( cp, cp + std::strlen(cp), std::back_inserter(data));
    }

    // create a Str from the range denoted by iterators b and e
    template <class In>
    Str(In b, In e)
    {
        std::copy(b, e, std::back_inserter(data));
    }

    char& operator[](size_type i) { return data[i]; }
    const char& operator[] (size_type i) const { return data[i]; }


private:
    Vec<char> data;

};

#endif // STR_H
