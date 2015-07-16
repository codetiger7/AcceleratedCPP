#include <iostream>
#include <pline.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



int main()
{
    string arrstr[] = { "the", "quick", "brown", "fox" };
    vector<string> ptext(arrstr, arrstr + 4);

    string bstrarray[] = { "jumped", "over", "the", "fence" };
    vector<string> ttext(bstrarray, bstrarray + 4);

    vector<PLine> collection;

    /// get input into the vector
    int num = 0;
    while(num != 4)
    {
        PLine p(ptext, num);
        collection.push_back(p);
        ++num;
    }

    num = 0;
    while(num != 4)
    {
        PLine p(ttext, num);
        collection.push_back(p);
        ++num;
    }



    /// sort the input
    sort(collection.begin(), collection.end(), compare);

    /// find the longest string
    string::size_type width = 0;

    typedef vector<PLine>::size_type sz;

    for(sz i = 0; i != collection.size(); ++i )
    {
        width = max(width, collection[i].stringLine.size());
    }




    /// print out collection with space in right place

    vector<string> sentence;
    typedef vector<PLine>::size_type sz;
    for( sz i = 0; i != collection.size(); ++i)
    {
        sentence = collection[i].display( 15);

        cout << string(width - sentence[0].size(), ' ')
             << sentence[0] << sentence[1] << endl;

//        cout << collection[i].stringLine << endl;
    }





//    typedef vector<PLine>::size_type sz;
//    for( sz i = 0; i != collection.size(); ++i)
//    {
//        cout << collection[i].stringLine << endl;
//    }

    return 0;
}

