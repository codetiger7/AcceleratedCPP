#ifndef VEC_H
#define VEC_H


template <class T>
class Vec
{
public:

    // typedef definitions §
    typedef std::ptrdiff_t difference_type;
    typedef T* iterator;
    typedef const T* const_iterator;
    typedef size_t size_type;
    typedef T value_type;
    typedef T& _reference;
    typedef const T& const_reference;

    Vec() { create(); }
    explicit Vec(std::size_t n, const T& t = T())  { create(n, t); }
    Vec(const Vec& v) { create(v.begin(), v.end()); }           // copy constructor
    Vec& operator=(const Vec&);                                 // the assingment operator
    ~Vec() { uncreate(); }

    T& operator[](size_type i)  { return data[i]; }
    const T& operator[](size_type i) const {return data[i]; }

    void push_back(const T& t)
    {
        if (avail == limit)         // get space if needed
            grow();
        unchecked_append(t);      // append the new element
    }

    size_type size() const { return avail-data; }

    iterator begin() { return data; }
    const_iterator begin() const { return data; }

    iterator end() { return avail; }
    const_iterator end() const { return avail; }

private:
    iterator data;        // first element in the Vec
    iterator avail;       // pointer to (one past) the last constructed element
    iterator limit;       // now points to (one past) last availiable element in the Vec

    // facilities for memory allocation
    allocator<T> alloc;   // object to handle memory allocation

    // allocate and initialize the underlying array
    void create();
    void create(size_type, const T&);
    void create(const_iterator, const_iterator);

    // destroy the elements in the array and free the memory
    void uncreate();

    // support functions for push_back
    void grow();
    void unchecked_append(const T&);
};

#endif // VEC_H
