// 7-5
// reimplement the program using list as the data structure in which we build sentence
// solve subscript operators

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <general.h>
#include <stdexcept>
#include <cstdlib>

using namespace std;


typedef list<string> Rule;
typedef list<Rule> Rule_collection;
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
gen_aux(const Grammar& g, const string& word, list<string>& ret)
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
//        const Rule& r = c[nrand(c.size())];
        size_t size = nrand(c.size());
        Rule_collection::const_iterator bit = c.begin();

        size_t ccnt = 0;
        while( ccnt  != size)
        {
            ++bit;
            ++ccnt;
        }
        const Rule& r = *bit;

//        const list<string>& r = *c.begin();
//        Rule& tempe = c.end();
//        while( () != size )

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

    // read the input
    while (getline(in, line))
    {
        // split the input into words
        vector<string> ventry = split(line);
        list<string> entry( ventry.begin(), ventry.end());


        /// @todo fix subscript, doesnt work for list
        if (!entry.empty())
        {
            // use the category to store the associated rule
//            ret[entry[0]].push_back( Rule(entry.begin() + 1, entry.end() ));
            list<string>::const_iterator es = entry.begin();
            ret[*es].push_back( Rule(++entry.begin(), entry.end() ));
        }
    }

    return ret;
}


list<string> gen_sentence(const Grammar& g)
{
    list<string> ret;

    gen_aux(g, "<sentence>", ret);

    return ret;
}


int main()
{

    std::srand(time(NULL));   // Added. Seed new form of randomness.

    // generate the sentence
    list<string> sentence = gen_sentence(read_grammar(cin));

    // write the first word, if any
    list<string>::const_iterator it = sentence.begin();
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

