// 6.1 Analyzing Strings
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string r[5] = { "This", "is", "the", "first","part"};
    string b[6] = { "And", "here", "is", "the", "second", "part"};
    vector<string> bottom(b, b+6);
    vector<string> ret(r, r+5);
    vector<string> ret1(ret);
    vector<string> ret2(ret);


    cout << endl << endl;

    // insert vector at the end of another
    // variations from the book

    // solution 1
    for(vector<string>::const_iterator it = bottom.begin();
        it != bottom.end(); ++it)
    {
        ret.push_back(*it);
    }

    for( auto& x : ret)
        cout << x << " ";
    cout << endl;


    // solution 2
    ret1.insert(ret1.end(), bottom.begin(), bottom.end() );

    for( auto& x : ret1)
        cout << x << " ";
    cout << endl;

    // solution 3  generic algorithm
    copy(bottom.begin(), bottom.end(), back_inserter(ret1));

    for (auto& x : ret1)
        cout << x << " ";
    cout << endl;





    return 0;
}

