#ifndef PHELPERS_H
#define PHELPERS_H

#include <vector>
#include <string>

struct Pline
{   Pline()
    {
        markerPos = -1;
        order = -1;
    }
    std::string line;
    int markerPos;
    int order;
};

std::vector<Pline> permutations(std::vector<std::string> svec);



#endif // PHELPERS_H
