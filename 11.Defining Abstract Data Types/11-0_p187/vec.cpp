#include "vec.h"

Vec::Vec()
{

}



template <class T>
Vec<T>&
Vec<T>::operator=(const Vec& rhs)
{
    // check for self assingment
    if (this != &rhs)
    {
        // free the array in the left-hand side
        uncreate();

        // copy elements from the right-hand to the left-hand side
        create( rhs.begin(), rhs.end());
    }

    return *this;
}
