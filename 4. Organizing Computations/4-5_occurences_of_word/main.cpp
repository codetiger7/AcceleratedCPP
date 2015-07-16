/// 4-5
/// counts number of times words occured
///
#include <iostream>
#include <function.h>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    vector<string> words;
    map<string, int> solution;

    generalFunction(cin, words);

    typedef vector<string>::iterator it;
    it beg = words.begin();

    while( beg != words.end())
    {
        ++solution[*beg];
        ++beg;
    }

    typedef map<string, int>::const_iterator mit;

    for(mit i = solution.begin(); i != solution.end(); ++i)
    {
        cout << i->first << "\t" << i->second << endl;
    }


    return 0;
}

