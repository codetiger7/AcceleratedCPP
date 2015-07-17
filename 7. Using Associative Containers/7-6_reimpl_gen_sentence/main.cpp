#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <general.h>
#include <stdexcept>
#include <cstdlib>

using namespace std;


typedef vector<string> Rule;
typedef vector<Rule> Rule_collection;
typedef map<string, Rule_collection> Grammar;


// return a random integer in the range [0, n)
int nrand(int n)
{
    if (n <= 0 || n > RAND_MAX)
        throw domain_error("Argument to nrand is out of range");

    const int bucket_size = RAND_MAX / n;
    int r;

    do
    {
        r = rand() / bucket_size;
    } while( r >= n);

    return r;
}


void
gen_aux(const Grammar& g, const string& word, vector<string>& ret)
{
    if (!bracketed(word))
    {
        ret.push_back(word);
    }
    else
    {
        // locate the rule that corresponds to word
        Grammar::const_iterator it = g.find(word);
        if( it == g.end())
            throw logic_error("empty rule");

        // fetch the set of possible rules
        const Rule_collection& c = it->second;

        // from which we select one at random
        const Rule& r = c[nrand(c.size())];

        // recursively expand the selected rule
        for (Rule::const_iterator i = r.begin(); i != r.end(); ++i)
            gen_aux(g, *i, ret);
    }
}

// read a grammar from a given input stream
Grammar read_grammar(istream& in )
{
    Grammar ret;
    string line;

    string rulesarray[] = { "<noun>          cat",
                               "<noun>          dog",
                               "<noun>          table",
                               "<noun-phrase>   <noun>",
                               "<noun-phrase>   <adjective> <noun-phrase>",
                               "<adjective>     large",
                               "<adjective>     brown",
                               "<adjective>     absurd",
                               "<verb>          jumps",
                               "<verb>          sits",
                               "<location>      on the stairs",
                               "<location>      under the sky",
                               "<location>      wherever it wants",
                               "<sentence>      the <noun-phrase> <verb> <location>" };
    vector<string> rules(rulesarray, rulesarray + 14);

    vector<string>::const_iterator it = rules.begin();
    // read the input
    while ( it != rules.end())
    {
        // split the input into words
        vector<string> entry = split(*it);

        if (!entry.empty())
            // use the category to store the associated rule
            ret[entry[0]].push_back( Rule(entry.begin() + 1, entry.end() ));

        ++it;
    }

    return ret;
}


vector<string> gen_sentence(const Grammar& g)
{
    vector<string> ret;

    gen_aux(g, "<sentence>", ret);

    return ret;
}


int main()
{

    std::srand(time(NULL));   // Added. Seed new form of randomness.

    // generate the sentence
    vector<string> sentence = gen_sentence(read_grammar(cin));

    // write the first word, if any
    vector<string>::const_iterator it = sentence.begin();
    if (!sentence.empty())
    {
        cout << *it;
        ++it;
    }

    // write the rest of the words, each preceded by a space
    while (it != sentence.end())
    {
        cout << " " <<  *it;
        ++it;
    }

    cout << endl;

    return 0;
}

