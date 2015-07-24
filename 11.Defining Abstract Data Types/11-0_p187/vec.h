#ifndef VEC_H
#define VEC_H


template <class T>
class Vec
{
public:
    Vec& operator=(const Vec&);     // the assingment operator
    Vec(const Vec& v) { create(v.begin(), v.end()); }          // copy constructor

    // typedef definitions §
    typedef T* iterator;
    typedef const T* const_iterator;
    typedef size_t size_type;
    typedef T value_type;
    typedef std::ptrdiff_t difference_type;
    typedef T& _rreference;
    typedef const T& const_reference;

    Vec() { create(); }
    explicit Vec(std::size_t n, const T& val = T())  { create(n, val); }

    size_type size() const { return limit-data; }

    T& operator[](size_type i)  { return data[i]; }
    const T& operator[](size_type i) const {return data[i]; }

    // new functions to return iterators
    iterator begin() { return data; }
    const_iterator begin() const { return data; }

    iterator end() { return limit; }
    const_iterator end() const { return limit; }

private:
    iterator data;        // first element in the Vec
    iterator limit;       // one past the last element in the Vec
};

#endif // VEC_H
