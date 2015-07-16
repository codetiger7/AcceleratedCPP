#include <iostream>
#include <string>
using namespace std;

int main()
{

    // square
    cout << "square: " << endl << endl;
    size_t sideSize = 4;

    for(size_t i = 0; i != sideSize; ++i )
    {
        for( size_t j = 0; j != sideSize; ++j)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl;
    // rectangle
    cout << "rectangle: " << endl << endl;
    size_t length = 12;
    size_t tHeight = 3;

    for(size_t i = 0; i != tHeight; ++i)
    {
        for(size_t j = 0; j != length; ++j)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl;

    // triangle
    cout << "triangle: " << endl << endl;
    size_t dotSize = 0;
    size_t spaceSize = 9;
    size_t height = 5;

    for( size_t i = 0; i != height; ++i)
    {
        for( size_t j = 0; j != spaceSize; ++j)
        {
            cout << " ";
        }

        for(size_t k = 0; k != dotSize;  ++k )
        {
            cout << "*";
        }

        if(dotSize < 1)
            ++dotSize;
        else
            dotSize += 2;
        --spaceSize;
        cout << endl;
    }

    return 0;
}

