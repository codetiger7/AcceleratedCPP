// 8-0
// Part 8: Input Stream Iterator, page 151

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    // read ints from the standard input and append them to v
    copy( istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(v) );


    typedef vector<int>::size_type v_sz;
    for(v_sz i = 0; i != v.size(); ++i)
    {
        cout << v[i] << endl;
    }


    return 0;
}

