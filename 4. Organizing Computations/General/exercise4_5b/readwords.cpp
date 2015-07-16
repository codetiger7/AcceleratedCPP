#include <iostream>
#include <vector>

using namespace std;


istream& readWords(istream& in, vector<string>& svec)
{
    if (cin)
    {
        svec.clear();

        string word;

        // words read so far
        while(in >> word)
        {
            svec.push_back(word);
        }

        cin.clear();
    }

    return cin;
}

