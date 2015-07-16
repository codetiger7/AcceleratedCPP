#include <iostream>
#include <string>
#include <vector>
#include <functions.h>

using namespace std;

int main()
{
   vector<string> text;
   text.push_back("Hi there now we are testing");
   text.push_back("some concatenating");
   text.push_back("and boxing of text");
   text.push_back("fairly cool or what?");


   vector<string> framedText = frame(text);

   vector<string> textHcat = hcat(framedText, text);

   for( string line : textHcat )
       cout << line << endl;


    return 0;
}

