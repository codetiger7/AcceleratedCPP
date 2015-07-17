#include <iostream>
#include <string>
#include <vector>
#include <cctype>       // needed for isspace()


using namespace std;

vector<string> split(const string& s);

int main()
{

    string s;
    // read and split each line of input
    while( getline(cin, s) )
    {

        vector<string> v = split(s);

        // wrtie each word in v
        for(vector<string>::size_type i = 0; i != v.size(); ++i)
        {
             cout << v[i] << endl;

        }

    }


    return 0;
}

vector<string> split(const string& s)
{
    vector<string> ret;
    typedef vector<string>::size_type string_size;
    string_size i = 0;

    // invariant: we have processed characters [original value of i, i)
    while( i != s.size() )
    {
        // ignore leading blanks
        // invariant: characters in ragne [original i, current i) are all spaces
        while( i != s.size() && isspace(s[i]) )
        {
            ++i;
        }

        // find end of next word
        string_size j = i;

        // invariant: none of the characters in range [original j, current j) is a space
        while( j != s.size() && !isspace(s[i]) )
        {
            ++j;
        }

        // if we found some nonwhitespace characters
        if (i != j)
        {
            // copy from starting at i and taking j-i chars
            ret.push_back(s.substr(i, j-i) );
            i = j;
        }
    }

    return ret;
}