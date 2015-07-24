#ifndef VEC_H
#define VEC_H


template <class T>
class Vec
{
public:
    ~Vec() { uncreate(); }
    Vec& operator=(const Vec&);                                 // the assingment operator
    Vec(const Vec& v) { create(v.begin(), v.end()); }           // copy constructor

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

    size_type size() const { return avail-data; }

    T& operator[](size_type i)  { return data[i]; }
    const T& operator[](size_type i) const {return data[i]; }

    // new functions to return iterators
    iterator begin() { return data; }
    const_iterator begin() const { return data; }

    iterator end() { return avail; }
    const_iterator end() const { return avail; }
    void push_back(const T& val)
    {
        if (avail == limit)         // get space if needed
            grow();
        unchecked_append(val);      // append the new element
    }

private:
    iterator data;        // first element in the Vec
    iterator avail;       // pointer to (one past) the last constructed element
    iterator limit;       // now points to (one past) last availiable element in the Vec
};

#endif // VEC_H
