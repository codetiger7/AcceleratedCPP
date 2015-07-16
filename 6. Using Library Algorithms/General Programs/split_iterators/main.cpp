#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

bool space(char c);
bool not_space(char c);
vector<string> split(const string& str);
bool is_palindrome(const string& s);

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

bool is_palindrome(const string& s)
{
    return equal(s.begin(), s.end(), s.rbegin() );
}

// true if the argument is whitespace, false otherwise
bool space(char c)
{
    return isspace(c);
}

// false if the argument is whitespace, true otherwise
bool not_space(char c)
{
    return !isspace(c);
}

vector<string> split( const string& str)
{
    typedef string::const_iterator iter;
    vector<string> ret;

    iter i = str.begin();

    while( i != str.end() )
    {
        // ignore leading blanks
        i = find_if(i, str.end(), not_space);

        // find end of next word
        iter j = find_if( i, str.end(), space);

        // copy the characters in [i, j)
        if( i != str.end() )
            ret.push_back(string(i, j));

        i = j;
    }

    return ret;
}
