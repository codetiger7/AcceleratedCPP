#ifndef VEC_H
#define VEC_H


template <class T>
class Vec
{
public:
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

    // new operations: start size and index
    size_type sice()
private:
    T* data;        // first element in the Vec
    T* limit;       // one past the last element in the Vec
};

#endif // VEC_H
