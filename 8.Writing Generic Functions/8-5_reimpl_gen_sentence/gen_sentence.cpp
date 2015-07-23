
#include <map>
#include <random.h>
#include <stdexcept>
#include <string>
#include <vector>


#include <gen_sentence.h>

using std::logic_error;
using std::map;
using std::string;
using std::vector;

vector<string>
gen_sentence(const map<string, vector<vector<string> > >& g)
{
    vector<string> ret;
    gen_aux(g, "<sentence>", ret);
    return ret;
}

void
gen_aux(const map<string, vector<vector<string> > >& g,
        const string& word,
        vector<string>& ret)
{
    if (!bracketed(word))
    {
        ret.push_back(word);
    }
    else
    {
        // locate te rule that corresponds to word
        map<string,vector<vector<string> > >::const_iterator it = g.find(word);
        if (it == g.end())
            throw logic_error("empty rule");

        // fetch the set of possible rules
        const vector<vector<string> >& c = it->second;

        // from which we select one at random
        const vector<string>& r = c[nrand(c.size())];

        // recursively expand the selected rule
        for( vector<string>::const_iterator i = r.begin(); i != r.end(); ++i)
            gen_aux(g, *i, ret);
    }
}

bool bracketed( const string& s)
{
    return s.size() > 1 && s[0] == '<' && s[s.size()-1] == '>';
}



