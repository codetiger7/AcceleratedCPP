// 5-11
// Ascenders or Descenders
// make a program to determine if a word has any ascenders or descenders
// make the program find the longest word in the dictionary with no ascenders and no descenders

#include <vector>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool checkForAscDesc(string word);

int main()
{

    ifstream inFile("generalText.txt");

    vector<string> ascdesc;
    vector<string> normalwords;

    string longestNormal;
    string word;


    if (!inFile)
        cout << "\nFile: " << inFile << " would not open" << endl;


    while ( inFile >> word )
    {
        // check input for palindromes
        bool isAscDesc = checkForAscDesc(word);

        if (isAscDesc)
        {
            ascdesc.push_back(word);
        }
        else
        {
            // store longest normal word
            if (longestNormal.size() < word.size())
                longestNormal = word;

            normalwords.push_back(word);
        }
    }



    // Print AscdDesc
    if( ascdesc.size() > 0)
    {
        cout << endl << "Ascenders/Descenders found: " << endl << endl;

        typedef string::size_type s_sz;
        for( s_sz i = 0; i != ascdesc.size(); ++i)
        {
            cout << ascdesc[i] << endl;
        }
    }


    // Print Normal words, and longest non-ascdesc
    if( normalwords.size() > 0)
    {
        cout << endl << "Normal words found: " << endl << endl;

        typedef string::size_type s_sz;
        for( s_sz i = 0; i != normalwords.size(); ++i)
        {
            cout << normalwords[i] << endl;
        }

        cout << "\n\n\nThe longest non-asc/desc found was: "
             << longestNormal << " size: "
             << longestNormal.size() << endl << endl;
    }

    return 0;
}





bool checkForAscDesc(string word)
{
    string ascdesc = "bdfhkltgjpqy";

    if( word.find_first_of(ascdesc) != string::npos)
        return true;

    return false;
}
