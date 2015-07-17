#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <stdexcept>
#include <cstdlib>

#include <general.h>
#include <generate.h>

using namespace std;


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
