#include <iostream>
#include <vector>
#include <string>
#include <fun.h>
#include <horizontal_cat.h>
using namespace std;

int main()
{
    cout << endl << endl;
    string atex[] = {"this is an", "example", "to", "illustrate", "framing"};
    vector<string> text(atex, atex + 5);

    vector<string> framedText = hcat( text, frame(text));

    for( size_t i = 0; i != framedText.size(); ++i)
    {
        cout << framedText[i] << endl;
    }

    return 0;
}

