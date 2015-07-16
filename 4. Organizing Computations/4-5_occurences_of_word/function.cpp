

#ifndef FUNCTION
#define FUNCTION

#include <iostream>
#include <vector>
#include <string>
#include <function.h>
using namespace std;

istream& generalFunction(istream& in, vector<string>& words)
{
    string w;
    while(in >> w )
        words.push_back(w);



        return in;
}

#endif // FUNCTION


