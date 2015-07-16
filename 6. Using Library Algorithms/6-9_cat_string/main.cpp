#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>

using namespace std;

string cat( string& a,  string b);

int main()
{
    string arr[9] = { "see ", "we ", "can ", "concatenate ", "all ", "elements", "of", "a", "string"};
    vector<string> text(arr, arr+9);


     string str;

    //concatStr.append(text.begin(), text.end());
   //  transform(text.begin(), text.end(), concatStr, cat);
   //  copy(text.begin(), text.end(), );


//     typedef vector<string>::size_type sz_s;

//     for(sz_s i = 0; i != text.size(); ++i )
//     {
//        copy(text[i].begin(), text[i].end(), back_inserter(str));
//     }


//    accumulate(text.begin(), text.end(), str );


     string sum = accumulate(text.begin(), text.end(), str );

    cout << endl << endl << sum << endl << endl;


    return 0;
}


string cat( string& a,  string b)
{
    return  a.append(b);
}
