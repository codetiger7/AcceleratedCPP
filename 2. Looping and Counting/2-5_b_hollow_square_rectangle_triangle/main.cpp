/// 2-6 b)
/// square, rectangle, triangle
#include <string>
#include <iostream>

using namespace std;

void swapAndMove(string&line, int pos1, int pos2);

int main()
{

    /// Square Solution
    /// /////////////////////////////////////////////////////////////
    const int rows = 6;
    const int columns = 10;

    cout << endl;

    for( int i = 0; i != rows; ++i)
    {
        for(int j = 0; j != columns; ++j)
        {
            /// if on first line, or on last line
            /// if in first colum, or in last colum
            /// print star
            if(i == 0 || i == rows-1 || j == 0 || j == columns-1)
                cout << '*';
            else
                cout << ' ';
        }

        /// new line when finished with printout
        cout << endl;
    }
    ///////////////////////////////////////////////////////////////////

    cout << endl << endl;

    /// Rectangle Solution
    /// ///////////////////////////////////////////////////////////////
    const int rrows = 8;
    const int rcolumns = 45;

    cout << endl;

    for( int i = 0; i != rrows; ++i)
    {
        for(int j = 0; j != rcolumns; ++j)
        {
            /// if on first line, or on last line
            /// if in first colum, or in last colum
            /// print star
            if(i == 0 || i == rrows-1 || j == 0 || j == rcolumns-1)
                cout << '*';
            else
                cout << ' ';
        }

        /// new line when finished with printout
        cout << endl;
    }

    cout << endl;

    /// Triangle Solution
    /// ////////////////////////////////////////////////////////////////////
    const string triLine("           *          ");
    string trilin       ("          * *         ");
    const int triRows = 10;
    int p1 = 10;
    int p2 = 12;


    cout << triLine << endl;
    for( int i = 0; i != triRows; ++i)
    {

        cout << trilin << endl;
        swapAndMove(trilin, p1, p2);

        --p1;
        ++p2;
    }

    cout << string(triRows * 2 + 3, '*') << endl;

    return 0;
}



void swapAndMove(string& line, int pos1, int pos2)
{
    line[pos1]      = ' ';
    line[pos1-1]    = '*';

    line[pos2]      = ' ';
    line[pos2+1]    = '*';
}

