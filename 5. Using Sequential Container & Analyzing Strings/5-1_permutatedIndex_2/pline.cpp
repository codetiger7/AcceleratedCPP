#include <pline.h>
#include <algorithm>
#include <iostream>

using std::cout;
using std::sort;
using std::string;
using std::vector;
using std::rotate;
using std::istream;
using std::ostream;

PLine::PLine(std::vector<std::string> text, int rotations)
    : txt_(text)
    , rotations_(rotations)
{
    init();
}

PLine::~PLine()
{
}


void
PLine::PLine::init()
{
    setPermText();
}

void PLine::setPermText()
{
    permtxt_ = txt_;

    /// rotate to create correct perm
    std::rotate(permtxt_.begin(), permtxt_.begin() + rotations_, permtxt_.end());

    typedef vector<string>::size_type sz;
    for(sz i = 0; i != permtxt_.size(); ++i)
    {
        stringLine += permtxt_[i];
        stringLine += " ";
    }

}

std::vector<std::string>
PLine::display(int separation)
{
    string sep(separation, ' ');
    string part;
    string part2;

    typedef vector<string>::size_type v_sz;
    vector<string> solutionText;
    v_sz rot = rotations_;

    for(v_sz i = 0; i != txt_.size(); ++i)
    {
        if(rot == i)
        {
           solutionText.push_back(part);
           part = "";
           part += sep;
        }

        part += txt_[i];

        if( i < txt_.size()-1)
            part += " ";
    }

    solutionText.push_back(part);

    return solutionText;
}

bool
compare(const PLine &a, const PLine &b)
{
    return a.stringLine < b.stringLine;
}





