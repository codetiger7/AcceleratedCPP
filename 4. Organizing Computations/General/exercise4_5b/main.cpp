// use function to write program that count how many times each word occured

#include <iostream>
#include <vector>
#include <string>

#include <readwords.h>

using namespace std;

void wordsOccured(vector<string> words);

int main()
{
    // read and store words in vector
    vector<string> words;
    readWords(cin, words);

    // funtion that prints each word and how many times is has occured
    wordsOccured(words);
    return 0;
}

void wordsOccured(vector<string> words)
{
    while(words.size() != 0)
    {
        // store first word
        string word = *words.begin();

        // counter to track word repetitions
        int repcnt = 0;
        vector<string>::iterator it = words.begin();

        // invariant repcount repetitions of word found
        while( it != words.end() )
        {
            // if you found an occurrence of word
            // increase repcount and erase occurrence
            if (word == *it)
            {
                ++repcnt;
                words.erase(it);
            }
            else
            {
                ++it;
            }
        }

        // print times word was repeated
        cout << word << ": " << repcnt << endl;

        // reset count for next word
        repcnt = 0;


    }
}







