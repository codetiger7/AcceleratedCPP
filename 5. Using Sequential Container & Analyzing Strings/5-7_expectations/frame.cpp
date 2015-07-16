#include <frame.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::max;
using std::vector;
using std::string;
using std::endl;
using std::cout;

string::size_type width(const vector<string>& v)
{
    string::size_type maxlen = 0;
    typedef vector<string>::size_type vs_sz;

    // the for loop will not occurs since v.size() == 0
    for(vs_sz i = 0; i != v.size(); ++i)
        maxlen = max(maxlen, v[i].size());

    // we return the maxlen = 0
    return maxlen;

}

vector<string> frame(const vector<string>& v)
{
    vector<string> ret;
    // ret is created
    // then a call to maxlen is done
    // with emoty vector v as an argument

    string::size_type maxlen = width(v);

    // maxlen is  0
    string border(maxlen + 4, '*');

    // border is set to ****


    // write the top border
    ret.push_back(border);

    // border is stored


    // write each interior row, bordered by an asterisk and a space
    typedef vector<string>::size_type vs_sz;
    for(vs_sz i = 0; i != v.size(); ++i)
    {
        ret.push_back("* " + v[i] + string(maxlen-v[i].size(), ' ') + " *");
    }

    // v is 0 so for loop will not execute
    // another **** is pushed onto ret
    // ret is returned

    ret.push_back(border);

    return ret;
}

