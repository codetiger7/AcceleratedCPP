#include <iostream>
#include <vector>
#include <string>
#include <fun.h>

using namespace std;

int main()
{
    string atext[] = { "this is an" , "example", "to", "illustrate", "framing" };
    vector<string> text(atext, atext + 5);

    vector<string> framedText = frame(text);

    for(size_t i = 0; i != framedText.size(); ++i)
    {
        cout << framedText[i] << endl;
    }



    return 0;
}

