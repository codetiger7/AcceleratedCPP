#ifndef REPLACE
#define REPLACE

namespace local
{

    template <class For, class X>
    void replace( For beg, For end, const X& x, const X& y)
    {
        while(beg != end)
        {
            if(*beg == x)
                *beg = y;
            ++beg;
        }
    }

}
#endif // REPLACE

