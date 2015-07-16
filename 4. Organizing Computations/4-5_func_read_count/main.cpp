/// 4-5
/// function read words from input stream
/// function stores in vector
/// function used for program to count number of words in input
/// function usedfor count number of times each word occured
///
///
/// count the number of words in input
#include <iostream>
#include <vector>
#include <string>
#include <function.h>
using namespace std;

int main()
{
    /// prompt
    cout << "Please enter words: ";
    vector<string> words;

    generalFunction(cin, words);


    cout << "Number of words entered: " << words.size() << endl;

    return 0;
}

