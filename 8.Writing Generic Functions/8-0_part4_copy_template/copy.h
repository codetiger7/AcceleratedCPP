#ifndef COPY
#define COPY

namespace cp
{

    template <class In, class Out>
    Out copy(In begin, In end, Out dest)
    {
        while (begin != end)
            *dest++ = *begin++;
        return dest;
    }
}
#endif // COPY

