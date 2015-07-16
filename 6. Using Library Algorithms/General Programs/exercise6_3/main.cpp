#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using std::copy;

int main()
{
    typedef vector<int>::const_iterator iter;

    vector<int> u(10, 100);
    vector<int> v;
    copy(u.begin(), u.end(), back_inserter(v) );



    iter uBeg = u.begin();

    cout << "U: contains: " << endl;
    while( uBeg != u.end() )
    {
        cout << *uBeg << endl;
        ++uBeg;
    }





    iter counter = v.begin();

    while( counter != v.end() )
    {
        cout << *counter << endl;

        ++counter;
    }



    return 0;
}

