// 5-5 Write a function vector<string> center( const vector<string>& );
// That returns a picture in which all the original lines are padded out to their full width
// and the padding is as evenly divided between l/r sides of the picture as possible
// what are the properties of pictures for which such a function is useful?
// how can you tell whether a given picture has those properties?

//   hi
//   how
//   har du det
// **************
// *            *
// *     hi     *
// *    how     *
// * har du det *
// *            *
// **************
#include <iostream>
#include <vector>
#include <string>
#include <framing.h>

using namespace std;

int main()
{
    vector<string> test;
    test.push_back(string("hi brian you look good"));
    test.push_back(string("how awesome is programming?"));
    test.push_back(string("I hear you"));
    test.push_back(string("are both"));
    test.push_back(string("a juggler and and engineer!"));



//    test = frame(test);
    test = center(test);


    for( auto &a : test)
        cout << a << endl;

    return 0;
}

