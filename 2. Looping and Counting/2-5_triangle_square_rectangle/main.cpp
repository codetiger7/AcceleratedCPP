/// 2-5
/// Square *
/// rectangle *
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter size of square: ";
    int size = 0;
    cin >> size;

    for(size_t sidecnt = 0; sidecnt != size; ++sidecnt)
    {

        for(size_t hcnt = 0; hcnt != size; ++hcnt)
        {
            cout << '*';
        }

        cout << endl;
    }



    cout << endl << endl;


    for(size_t sidecnt = 0; sidecnt != 3; ++sidecnt)
    {

        for(size_t hcnt = 0; hcnt != 25; ++hcnt)
        {
            cout << '*';
        }

        cout << endl;
    }

    cout << endl << endl;

    /// triangle

    int stars = 1;
    int spaces = 10;

    for(size_t sidecnt = 0; sidecnt != 10; ++sidecnt)
    {
        for(size_t hcnt = 0; hcnt != spaces; ++hcnt)
        {
            cout << ' ';
        }

        for(int i = 0; i != stars; ++i)
        {
            cout << '*';
        }

        cout << endl;
        --spaces;
        stars += 2;
    }

    return 0;
}

