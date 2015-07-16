// 6.1.3 Finding URLs, page 105
// URL: protocol-name://resource-name
//
// protocol-name = only letters
// resource name = letters, digits, and certain punctuation characters

#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <fstream>

using namespace std;



bool not_url_char(char c)
{
    // characters, in addition to alphanumerics, that CAN appear in an URL
    static const string url_ch = "~;/?:@=&$-_.+!*´(),";

    // see whether c can appear in a URL and return the negative
    return !(isalnum(c) ||
             find(url_ch.begin(), url_ch.end(), c) != url_ch.end() );
}



string::const_iterator
url_beg(string::const_iterator b, string::const_iterator e)
{
    static const string sep = "://";
    typedef string::const_iterator iter;

    // i marks where the separator was found
    iter i = b;

    while (  (i = search(i,e, sep.begin(),sep.end())) != e  )
    {
        // make sure the separator isn't at the beginning or end of the line
        if (i != b &&  (i + sep.size())  !=  e)
        {
            // beg marks the beginning of the protocol-name
            iter beg = i;
            while (beg != b  && isalpha(beg[-1]) )
                --beg;

            // is there at least one appropriate character before and after the separator
            if (beg != i &&  !not_url_char(i[sep.size()]) )
                return beg;
        }

        // the separator we found wasn't a part of an URL; advance i past this separator
        i += sep.size();
    }

    return e;
}




string::const_iterator
url_end(string::const_iterator b, string::const_iterator e)
{
    return find_if(b, e, not_url_char);
}


vector<string> find_urls(const string& s)
{
    vector<string> ret;
    typedef string::const_iterator iter;
    iter b = s.begin();
    iter e = s.end();

    // look through entire input
    while (b != e)
    {
        // look for one or more letters followed by ://
        b = url_beg(b, e);

        // if we found it, (are we 100% sure its an url at this point?)
        if (b != e)
        {
            // get the rest of the url
            iter after = url_end(b, e);

            // remember the URL
            ret.push_back(string(b, after));

            // advance b and check for more URLS on this line
            b = after;
        }
    }

    return ret;
}




int main()
{
    ifstream infile("url.txt");

    string x;
    string text;
    while(getline(infile, x))
    {
        text += x;
    }



    vector<string> textV = find_urls(text);

    cout << endl;
    for( auto& t : textV)
        cout << t << endl;




    return 0;
}

