#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

int main()
{
    vector<string> elem;
    elem.push_back("hi what is");
    elem.push_back(" your name?");
    elem.push_back(" mine is brian");

    string x;

    string text = accumulate(elem.begin(), elem.end(), x);


    cout << text << endl;
    return 0;
}

