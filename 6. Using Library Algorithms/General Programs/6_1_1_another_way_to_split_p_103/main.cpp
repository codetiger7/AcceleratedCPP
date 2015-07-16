// 6.1.1 Another way to split
//
#include <iostream>
#include <cctype>   // isspace();
#include <vector>
#include <string>

using namespace std;


// true if the argument IS whitespace
bool space(char c)
{
    return isspace(c);
}

// false if the argument IS whitespace, true IF NOT whitespace
bool not_space(char c)
{
    return !isspace(c);
}

vector<string> split(const string& str)
{
    typedef string::const_iterator iter;
    vector<string> ret;

    iter i = str.begin();
    while( i != str.end())
    {
        // ignore leading blanks
        i = find_if(i, str.end(), not_space);

        // find end of next word
        iter j = find_if( i, str.end(), space);

        // coy the characters in [i, j)
        if (i != str.end() )
            ret.push_back(string(i, j));

        i = j;
    }

    return ret;
}

int main()
{
    string sentence = "This sentence will be split into eight strings";

    vector<string> v = split(sentence);

    for( auto& c : v)
        cout << c << endl;

    return 0;
}

