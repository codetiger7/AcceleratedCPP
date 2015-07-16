// 5-10
// Palindromes
// Find all the palindromes in a dictionary
// Next find the longest palindrome
#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool checkForAscDesc(string w);

int main()
{
    vector<string> palindromes;
    string longestPal;

    string word;
    while( cin >> word )
    {
        // check input for palindromes
        bool isPal = checkForAscDesc(word);
        if(isPal)
        {
            palindromes.push_back(word);

            // stroe longest palindrome
            if (longestPal.size() < word.size())
                longestPal = word;
        }
    }



    // Print Palindromes and longest palindrome
    if( palindromes.size() > 0)
        cout << endl << "Palindromes found: " << endl;
    else
        cout << endl << "No Palindromes" << endl;
    typedef string::size_type s_sz;
    for( s_sz i = 0; i != palindromes.size(); ++i)
    {
        cout << palindromes[i] << " ";
    }

    if(palindromes.size() > 0)
        cout << "\n\nThe longest palindrome found was: " << longestPal << " size: "
             << longestPal.size() << endl;

    return 0;
}





bool checkForAscDesc(string w)
{
    typedef string::const_iterator it;
    typedef string::const_reverse_iterator rit;
    it beg = w.begin();
    rit rbeg = w.rbegin();

    while( beg != w.end()  && rbeg != w.rend())
    {
        if(*beg != *rbeg)
            return false;
        ++beg;
        ++rbeg;
    }

    return true;
}
