#ifndef BOX
#define BOX

#include <string>


struct Box
{
std::string word;
int count;
};


bool compB(Box a, Box b)
{
    return a.count < b.count;
}

#endif // BOX

