// 5-9
// Write a program to write the words in the input that do not containe any uppercase letters
// followed by the words that contain one or more uppercase letters

#include <vector>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    vector<string> lowc;
    vector<string> upperc;

    // promt user for input
    cout << "Please enter some form of text: " << endl;

    string word;
    while(cin >> word)
    {
        bool capWord = false;

        typedef string::size_type s_sz;
        for(s_sz i = 0; i != word.size(); ++i)
        {
            if (isupper(word[i]))
                capWord = true;
        }

        if(capWord)
            upperc.push_back(word);
        else
            lowc.push_back(word);
    }
    cout << endl << endl;

    typedef vector<string>::size_type v_sz;
    for (v_sz i = 0; i != lowc.size(); ++i)
        cout << lowc[i] << " ";

    cout << endl;

    for (v_sz i = 0; i != upperc.size(); ++i)
        cout << upperc[i] << " ";

    cout << endl;

    return 0;
}

