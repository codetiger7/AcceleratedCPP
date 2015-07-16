#include <iostream>
#include <pline.h>
#include <vector>
#include <string>
#include <algorithm>
#include <func.h>

using namespace std;


int main()
{


    string arrstr[] = { "the", "quick", "brown", "fox" };
    vector<string> ptext(arrstr, arrstr + 4);

    string bstrarray[] = { "jumped", "over", "the", "fence" };
    vector<string> ttext(bstrarray, bstrarray + 4);


    // Prompt for input
    cout << endl << endl;
    cout << "Please enter sentences for permutated indexing:\n";
    string inputLine;
    vector<string> textLine;
    vector<PLine> completeText;

    // store and rotate input
    while(getline(cin, inputLine))
    {
        // vector with one line of input
        textLine = split(inputLine);

        vector<string>::size_type rotate = 0;
        while(rotate != textLine.size())
        {
            // store vector and size in a PLine type
            PLine p(textLine, rotate);

            // push line into storage
            completeText.push_back(p);

            // make sure all rotated variations of string is stored
            ++rotate;
        }
    }

    // sort input,
    sort(completeText.begin(), completeText.end(), compare);


    // find the longest string
    string::size_type width = 0;
    typedef vector<PLine>::size_type sz;

    for (sz i = 0; i != completeText.size(); ++i )
    {
        width = max(width, completeText[i].stringLine.size());
    }


    // print out collection with space in right place
    vector<string> sentence;
    int permSpace = 15;
    cout << endl << endl;


    typedef vector<PLine>::size_type sz;
    for ( sz i = 0; i != completeText.size(); ++i)
    {
        sentence = completeText[i].display( permSpace );

        cout << string(width - sentence[0].size(), ' ')
             << sentence[0] << sentence[1] << endl;
    }


    cout << endl << endl;
    return 0;
}

