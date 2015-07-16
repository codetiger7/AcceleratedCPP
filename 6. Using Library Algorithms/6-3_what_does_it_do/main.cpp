// 6-3
// what does this program fragment do?
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> u(10, 100);

    cout << "vector u is constructed with 10 elements of value 100" << endl;
    cout << "vector u: " << endl;
    typedef vector<int>::size_type v_sz;
    for (v_sz i = 0; i != u.size(); ++i)
    {
        cout << u[i] << " ";
    }

    cout << endl;

    vector<int> v;

    cout << "defines vector v" << endl;

    cout << "copies beginning to end of element u, into beginning of element v" << endl;
    cout << "vector v, has zero spaces, so we get an no storage, unless we use an inserter" << endl;

    copy(u.begin(), u.end(), v.begin());


    for (v_sz i = 0; i != v.size(); ++i)
    {
        cout << v[i] << " ";
    }

    return 0;
}

