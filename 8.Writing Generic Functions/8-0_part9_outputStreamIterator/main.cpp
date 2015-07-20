// 8-0
// Part 9: page 151
// use output stream iterator to write

#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string wordsArray[] = { "\ncool", "this", "is", "awesome\n\n" };
    vector<string> words( wordsArray, wordsArray + 4);


    // write the elements of v each separated from the other by a space
    copy(words.begin(), words.end(), ostream_iterator<string>(cout, " "));


    return 0;
}

