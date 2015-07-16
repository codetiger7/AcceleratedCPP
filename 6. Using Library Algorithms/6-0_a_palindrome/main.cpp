#include <iostream>
#include <string>
#include <fstream>
using namespace std;


bool is_palindrome(const string& s)
{
    return equal( s.begin(), s.end(), s.rbegin());
}

int main()
{
    ifstream infile("dance.txt");

    string word;

    while(infile >> word)
    {
        bool palindrome = is_palindrome(word);

        if(palindrome)
            cout << "Palindrome: " << word << endl;
    }
    return 0;
}

