// 6-1
// reimplement the frame and hcat operations from
// p. 93 and 94, 95, to use iterators

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// finds width of longest string in vector
string::size_type
width( const vector<string>& v);

vector<string>
frame( const vector<string>& v);

vector<string>
hcat(const vector<string>& left, const vector<string>& right);

int main()
{
    string a[5] = {"this is an", "example", "to", "illustrate", "framing"};

    vector<string> text( a, a+5);

    vector<string> fText = frame(text);


    vector<string> concatText = hcat(fText, text);

    typedef vector<string>::size_type v_sz;
    for( v_sz i = 0; i != concatText.size(); ++ i)
    {
        cout << concatText[i] << endl;
    }

    return 0;
}


vector<string>
hcat(const vector<string>& left, const vector<string>& right)
{
    vector<string> ret;

    // add 1 to leave a space between pictures
    string::size_type width1 = width(left) + 1;


    // indices to look at elements from left and right respectively
    typedef vector<string>::const_iterator it;
    it i = left.begin();
    it j = right.begin();

    // continue until we've seen all rows from both pictures
    while (i != left.end() || j != right.end() )
    {
        // construct new string to hold characters from both pictures
        string s;

        // copy a row from the left-hand side, if there is one
        if (i != left.end())
            s = *i++;

        // pad to full width
        s += string(width1 - s.size(), ' ');

        // copy a row from the right-hand side, if there is one
        if (j != right.end())
            s += *j++;

        // add s to the picture we're creating
        ret.push_back(s);
    }

    return ret;
}


vector<string>
frame( const vector<string>& v)
{
    vector<string> ret;
    string::size_type maxlen = width(v);
    string border(maxlen + 4, '*');

    // write the top border
    ret.push_back(border);

    // write each interior row, bordered by and asterisk and a space
    typedef vector<string>::const_iterator it;

    for (it beg = v.begin(); beg != v.end(); ++beg)
    {
        ret.push_back("* " + *beg + string( maxlen-beg->size(), ' ') + " *");
    }

    // write the bottom border
    ret.push_back(border);

    return ret;
}


string::size_type
width( const vector<string>& v)
{
    string::size_type maxlen = 0;

    for(vector<string>::size_type i = 0; i != v.size(); ++i)
        maxlen = max(maxlen, v[i].size() );

    return maxlen;
}
