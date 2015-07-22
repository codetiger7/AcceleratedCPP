#ifndef SWAPPING_H
#define SWAPPING_H

#include <iterator>

namespace local
{
    template <class Type>
    void swap(Type& b, Type& e)
    {
        Type temp(b);
        b = e;
        e = temp;
    }
}
#endif // SWAPPING_H
