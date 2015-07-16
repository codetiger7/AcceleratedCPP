#include <pline.h>
#include <algorithm>
#include <iostream>
#include <locale>
#include <cctype>

using std::cout;
using std::sort;
using std::string;
using std::vector;
using std::rotate;
using std::istream;
using std::ostream;
using std::locale;
using std::isupper;

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
//    locale loc;
//    std::setlocale(LC_ALL, "en_US.UTF-32");

//    return loc.operator()(a.stringLine,b.stringLine);

    // write a string compare that checks for captial,
    // ifuppercase sort as lowercase
    // if lowercase equals lowercase, sort uppercase as last

    // check if uppercasetrue and  uppercase false then uppercasetrue > uppercasefalse
    //

    typedef string::size_type s_sz;
    s_sz c = 0;

    bool result = false;

    while( c != a.stringLine.size() )
    {
        if(isupper(a.stringLine[c]))
            result = true;
        ++c;
    }

    c = 0;
    while( c != b.stringLine.size() )
    {
        if(isupper(b.stringLine[c]))
            result = true;
        ++c;
    }

    /// we have a Capital letter
    if(result)
       return stringCompare(a.stringLine, b.stringLine);


    return a.stringLine < b.stringLine;
}


bool stringCompare( const string& left, const string& right )
{

    // prep forr running though both strings
    typedef string::const_iterator it;
    it lit = left.begin();
    it rit = right.begin();

   while( lit != left.end() && rit != right.end() )
   {
       if ( isupper(*lit) && !isupper(*rit))
       {
           return false;
       }
       else if ( !isupper(*lit) && isupper(*rit))
       {
           return true;
       }



      if( tolower( *lit ) < tolower( *rit ) )
      {
         return true;
      }

      else if( tolower( *lit ) > tolower( *rit ) )
      {
         return false;
      }

      ++lit;
      ++rit;
   }

   if( left.size() < right.size() )
      return true;

   return false;
}





