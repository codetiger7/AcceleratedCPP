#ifndef BINARYSEARCH
#define BINARYSEARCH

namespace local
{
    template <class Ran, class X>
    bool binary_search(Ran begin, Ran end, const X& x)
    {
        while (begin < end)
        {
            // find the midpoint of the range
            Ran mid = begin + (end - begin) / 2;

            // see which part of the range contains x; keep looking only in that part
            if( x < *mid )
                end = mid;
            else if (*mid < x)
                begin = mid + 1;

            // if we got here, then *mid == x so we're done
            else
                return true;
        }

        return false;
    }

}

#endif // BINARYSEARCH

