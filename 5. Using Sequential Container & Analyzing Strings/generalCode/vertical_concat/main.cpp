#include <iostream>
#include <vcat.h>
#include <string>
#include <vector>
#include <../framing_a_picture/fun.h>

using namespace std;

int main()
{

    cout << endl << endl;
    string atex[] = {"this is an", "example", "to", "illustrate", "framing"};
    vector<string> text(atex, atex + 5);

    vector<string> framedText = vcat( text, frame(text));

    for( size_t i = 0; i != framedText.size(); ++i)
    {
        cout << framedText[i] << endl;
    }

    return 0;
}

