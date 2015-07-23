#ifndef FIND_IF_H
#define FIND_IF_H


namespace local
{
    template <class In, class Pred>
    In find_if(In begin, In end, Pred f)
    {
        while (begin != end && !f(*begin))
            ++begin;
        return begin;
    }
}
#endif // FIND_IF_H
