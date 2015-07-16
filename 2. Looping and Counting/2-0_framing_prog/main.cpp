/// 2-0
/// 2.5.4 The complete framing program
/// p. 29-30

#include <iostream>
#include <string>

/// say what standard-library names we use
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    /// ask for the person's name
    cout << "Please enter your first name: ";

    // read name
    string name;
    cin >> name;

    // build the message that we intend to write
    const string greeting = "Hello, " + name + "!";

    // the number of blanks surrounding the greeting
    const int pad = 1;

    // the number of rows and columns to write
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    // write a blank line to separate input from output
    cout << endl;

    // write (rows variable) rows of output
    // invariant: we have written r rows so far
    for( int r = 0; r != rows; ++r )
    {
        string::size_type c = 0;

        // invariant: we have written c characters so far in the current row
        while( c != cols )
        {
            // is it time to write the greeting
            if ( r == pad + 1 && c == pad + 1)
            {
                cout << greeting;
                c += greeting.size();
            }
            // are we on the border?
            else if ( r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
            {
                cout << "*";
                ++c;
            }
            else
            {
                cout << " ";
                ++c;
            }
        }

        cout << endl;
    }

    return 0;
}

