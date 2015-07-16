#include <iostream>
#include <collection.h>
#include <string>
using namespace std;



int main()
{
    string s;
    vector<string> picture;
    vector<string> pictureFrame;
    vector<string> fullPicture;


    cout << "Picture:" << endl << endl;

    while(getline(cin, s))
    {
       picture.push_back(s);
    }

    pictureFrame = frame(picture);

    fullPicture = hcat(picture, pictureFrame);


    for( vector<string>::size_type i = 0;
         i != fullPicture.size(); ++i)
    {
        cout << fullPicture[i] << endl;
    }

    return 0;
}

