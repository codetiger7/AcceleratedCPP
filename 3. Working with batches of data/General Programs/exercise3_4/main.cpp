// exercise 3-4
// Write a program to report the length of the longest and shortest string in its input

#include <iostream>
#include <string>

using namespace std;

int main()
{

    string::size_type shortest;
    string::size_type longest;
    string word;
    bool firstEntry = true;


    cout << "Enter strings: ";
    while(cin >> word)
    {
        if (firstEntry == true)
        {
            shortest = word.size();
            longest = word.size();
            firstEntry = false;
        }

        if (word.size() < shortest)
        {
            shortest = word.size();
        }
        if (word.size() > longest)
        {
            longest = word.size();
        }
    }

    // report the length of the longest and shortest input string
    cout << "Longest string was: " << longest << endl;
    cout << "Shortest string was: " << shortest << endl;


    return 0;
}

