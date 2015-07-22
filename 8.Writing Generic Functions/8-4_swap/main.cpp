// 8-4
// Implement the swap function used in §8.2.5/148
// Why did we call swap rather than exchange the values of *beg and *end directly?
// Hint try and see

#include <iostream>
#include <vector>

#include <swapping.h>
using namespace std;

int main()
{

    cout << endl;

    vector<int> iv;
    iv.push_back(80);
    iv.push_back(942);

    typedef vector<int>::iterator iter;
    iter e = iv.end();
    iter b = iv.begin();
    --e;

    cout << iv[0] << " " << iv[1] << endl;

    local::swap(*b, *e);

    cout << iv[0] << " " << iv[1] << endl;


    iter d = b;
    b = e;
    e = d;

    cout << iv[0] << "?" << iv[1] << endl;
    cout << *b << "?" << *e<< endl;


    return 0;
}

