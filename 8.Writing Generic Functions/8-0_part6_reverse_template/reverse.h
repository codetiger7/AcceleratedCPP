#ifndef REVERSE
#define REVERSE

#include <algorithm>

using std::swap;

namespace  local
{

    template <class Bi>
    void reverse(Bi begin, Bi end)
    {
        while (begin != end)
        {
            --end;

            if (begin != end)
                ::swap(*begin++, *end);
        }
    }

}

#endif // REVERSE

