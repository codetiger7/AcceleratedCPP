// 8-6 Suppose that m has type map<int, string>
// and that we encounter a call to copy(m.begin(), m.end(), back_inserter(x) )
// what can we say about the type of x?

// What if the call were copy(x.begin(), x.end(), back_inserter(m) ) instead?

// Answer:
// 1. x is a container, that can hold pair objects convertible from int and string

// 2. thar x is container holding a pair that is convertible to int and string



#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<int, string> m;

    return 0;
}

