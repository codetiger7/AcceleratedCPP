#include <iostream>

using namespace std;

int main()
{
    int e = 10;

    for( int i = 0; i != 10; ++i)
    {

        for(int k = 0; k != e; ++k)
        {
            cout << ' ';
        }
        --e;

        for(int j = 0; j != i; ++j)
        {
            cout << '*';
        }
        for(int n = -1; n != i; ++n)
        {
            cout << '*';
        }
        cout << endl;


    }
    return 0;
}

