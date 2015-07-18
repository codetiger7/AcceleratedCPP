#include <iostream>
#include <copy.h>
#include <vector>
#include <iterator>

using std::back_inserter;
using std::vector;
using std::cout;
using std::endl;

int main()
{

    char charA[24] = { 'H', ' ', 'O', ' ', 'W', ' ', ' ', 'D', ' ', 'O', ' '
                     , ' ', 'Y', ' ', 'O', ' ', 'U', ' ', ' ', 'D', ' ', 'O', ' ', '?' };

    vector<char> tv(charA, charA + 24);

    vector<char> c;

    cp::copy(tv.begin(), tv.end(), back_inserter(c));

    cout << endl;

    typedef vector<char>::size_type v_sz;
    for(v_sz i = 0; i != c.size(); ++i)
        cout << c[i];

    cout << endl << endl;

    vector<int> a;
    a.push_back(4);
    a.push_back(34);
    a.push_back(8);

    vector<int> b;

    cp::copy(a.begin(), a.end(), back_inserter(b));

    typedef vector<int>::size_type i_sz;
    for(i_sz i = 0; i != b.size(); ++i)
        cout << b[i] << endl;

    return 0;
}

