// 10-0
// 10.2 String Literals Revisited
// page 176

#include <cstddef>
#include <iostream>

using namespace std;


/// example implementation of stl function
size_t strlength(const char* p)
{
    size_t size = 0;
    while (*p++ != '\0')
        ++size;

    return size;
}


int main()
{
    const char hello[] = { 'H', 'e', 'l', 'l', 'o', '\0'};
    string s(hello);

    string s2(hello, hello + strlength(hello));


    return 0;
}

