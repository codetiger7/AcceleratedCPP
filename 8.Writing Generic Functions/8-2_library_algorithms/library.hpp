#ifndef LIBRARY
#define LIBRARY

#include <algorithm>


// 8-2
// Implement the library algorithms used in chapter 6.
// See: §6.5/121
// Specify the iterator types required
// Minimie distinct iterator operations for each function
// After completion, check §B.3/322

// equal (b, e, b2);
template <class Begin, class End, class Checkb>
bool equal( Begin b, End e, Checkb cb)
{
    while( b != e && cb != cb.end() )
    {
        if(*b != *cb)
            return false;

        ++cb;
        ++b;
    }

    return true;
}


// find( b, e, t)
// looks for the value t, in [b, e) sequence
template <class Begin, class End, class Element>
End find( Begin b, End e, Element t)
{
    while( b != e)
    {
        if (*b == t)
            return b;
        ++b;
    }

    return b;
}


// copy( b, e, d)
// Algorithms to copy the sequence from [b, e) to the destination denoted by d.
// copy algorithm copies the entire sequence
template <class Begin, class End, class Destination>
Destination copy( Begin b, End e, Destination d)
{
    while( b != e)
    {
        *d++ = *b++;
    }

    return d;
}


// remove_copy_if (b, e, d, p)
// Algorithm to copy the sequence from [b, e) to d
// copies all elements for which predicate p, fails
template <class Begin, class End, class Destination, class Pred>
Destination remove_copy_if(Begin b, End e, Destination d, Pred p)
{
    while( b != e)
    {
        if (!p(*d))
        {
            *d++ = *b;
        }

        ++b;
    }

    return d;

}

bool evenNumb(int n)
{
    return (n % 2 == 0);
}


// transform(b, e, d, f)
// runs the function f, on the elements in the range [b, e), sorting the result of f in d
template <class Begin, class End, class Destination, class Function>
Destination transform(Begin b, End e, Destination d, Function f)
{
    while( b != e)
    {
        *d++ = f(*b++);
    }

    return d;
}


// accumulate(b, e, t)
// creates a local variable and initializes it to a copy of t (with the same type as t, which
// means that the type of t is crucially important to the behaviour of accumulate), adds
// each element in the range [b, e) to the variable, and returns a copy of the variable as
// its result. Defined in <numeric>
template <class Begin, class End, class T>
T accumulate(Begin b, End e, T t)
{
    T sum = t;

    while( b != e)
    {
        sum += *b++;
    }

    return sum;
}


// search(b, e, b2, e2)
// Algorithm to look for a given sequence denoted by [b2, e2)
template <class Begin, class End, class Begin2, class End2>
Begin search(Begin b, End e, Begin2 b2, End2 e2)
{
    while ( b != e && b2 != e2)
    {
        if (*b++ == *b2++)
        {
            Begin marker = b;
            --marker;
            bool match = true;

            Begin trace = b;
            Begin2 subtrace = b2;

            while( match && trace != e && subtrace != e2)
            {
                if (*trace++ != *subtrace++)
                    match = false;
            }

            if (subtrace == e2 && match)
                return marker;
        }
    }

    return e;
}



// find_if(b, e, p)
// The find_if algorithm tests each element against the predicate p;
template <class Begin, class End, class Predicate>
Begin find_if(Begin b, End e, Predicate p)
{

    while( b != e)
    {
        if (p(*b))
        {
            return b;
        }

        ++b;
    }

    return e;
}



bool largerThan(double val)
{
    if( val > 95.5)
        return true;

    return false;
}


// remove_copy(b, e, d, t)
// Algorithm to copy the sequence from [b, e) to the destination denoted by d
// copies all elements not equal to t
template <class Begin, class End, class Destination, class Element>
End remove_copy(Begin b, End e, Destination d, Element t)
{

    while( b != e)
    {

        if (*b != t)
        {
            *d = *b;
            ++d;
        }

        ++b;
    }

    return d;
}


// remove(b, e, t)
// arranges the container so that the elements in the range [b, e) that are unequal to t
// are at the front of the range
// returns iterator denoting one past the range of these "unremoved elements"
// tests which elements to keep against the value of t
template <class Begin, class End, class Element>
End remove(Begin b, End e, Element t)
{
    // insertion point for values unequal to Element t
    Begin ins = b;

    while (b != e)
    {

        if (*b != t)
            *ins++ = *b;
        ++b;
    }

    return ins;
}



bool passed(int a)
{
    if (a < 10)
        return true;

    return false;
}

// partition(b, e, p)
// Partitions elements in the range [b, e) based on the predicate p, so that elements for which the
// predicate is true are at the front of the container
// returns an iterator to the first element for which the predicate is false, or e if
// the predicate is true for all elements
template <class Begin, class End, class Predicate>
End partition( Begin b, End e, Predicate p)
{
    End ins = b;

    while (b != e)
    {
        if(p(*b))
        {
            swap(*ins++, *b);
        }

        ++b;
    }

    return ins;
}


#endif // LIBRARY

