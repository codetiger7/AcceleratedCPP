// 7-6
// gen_sentence Accelerated C++
// Author Solution

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>
#include <time.h>
#include <vector>

#include <helper.h>



using namespace std;

int main()
{
    srand(time(NULL));

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
        cout << " " << *it;
        ++it;
    }

    cout << endl;



    return 0;
}

