// Exercise 4-5
// Function read words from input stream and stores them in vector
// use function to write programs that count the number of words in the input
// use function to write program that count how many times each word occured

#include <iostream>
#include <vector>
#include <string>
#include <readwords.h>

using namespace std;

std::istream& storeWords(istream& in, vector<string>& svec);

int main()
{
    // program count the number of words in the input
    vector<string> words;
    cout << "Enter words: " << endl;
    readWords(cin, words);

    // count the number of words in the input
    typedef vector<string>::size_type vec_sz;
    vec_sz size = words.size();

    cout << "The number of words entered are: " << size << endl;



    return 0;
}

