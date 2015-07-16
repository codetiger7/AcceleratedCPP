#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> words;
    vector<int> count;
    string word;
    bool found = false;

    cout << "Enter words: ";

    while( cin >> word )
    {
        for(vector<string>::size_type i = 0; i != words.size(); ++i)
        {
            if(word == words[i])
            {
                ++count[i];
                found = true;
            }
        }

        if(!found)
        {
            words.push_back(word);
            count.push_back(1);
        }

        found = false;
    }


    for( vector<string>::size_type i = 0; i != words.size(); ++i)
    {
        cout << words[i] << ": " << count[i] << endl;
    }


    return 0;
}

