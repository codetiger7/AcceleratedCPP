#ifndef FIND
#define FIND

template <class In, class X>
In fnd(In begin, In end, const X& x)
{
    while( begin != end && *begin != x)
        ++begin;

    return begin;
}

template <class In, class X>
In fnd2(In begin, In end, const X& x)
{
    if( begin == end || *begin == x)
        return begin;
    begin++;

    return fnd2(begin, end, x);
}

#endif // FIND

