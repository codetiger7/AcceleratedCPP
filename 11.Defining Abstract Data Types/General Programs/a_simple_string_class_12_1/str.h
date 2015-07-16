#include <vec.h>

class Str
{
    friend std::istream& operator>>(std::istream&, Str&);

public:
    Str& operator+=(const Str& s);


    size_type size() const { return data.size(); }
    char& operator[] (size_type i) { return data[i]; }
    const char& operator[] (size_type i ) const { return data[i]; }

    typedef Vec<char>::size_type size_type;
    /// default constructor; create and empty Str
    Str() {}

    /// create a Str containing n compies of c
    Str(size_type n, char c): data(n, c) { }

    /// create a Str from a null-terminated array of char
    Str(const char* cp)
    {
        std::copy( cp, cp + std::strlen(cp), std::back_inserter(data));
    }

    /// create a Str from the range denoted by iterators b and e
    template <class In> Str(In b, In e)
    {
        std::copy( b, e, std::back_inserter(data));
    }


private:
    Vec<char> data;
};


std::ostream& operator<<(std::ostream&, const Str&);

Str operator+(const Str& s, const Str& t);


