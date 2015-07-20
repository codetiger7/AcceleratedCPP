// 8-0
// Part 10: flexible split function
// page 152, 8.4 Using Iterators for Flexibility

#include <iostream>
#include <iterator>
#include <string>

#include <flexsplit.h>

using namespace std;

int main()
{
    string s;
    while(getline(cin, s))
    {
        split(s, ostream_iterator<string>(cout, " "));
    }


    return 0;
}

