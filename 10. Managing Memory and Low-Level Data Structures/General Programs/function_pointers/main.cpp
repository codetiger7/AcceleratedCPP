#include <iostream>

using namespace std;


int (*fp) (int);
int next(int);

int main()
{
    fp = &next;

    /// equivalent statues
    int i = 34;
    i = (*fp)(i);

    cout << i << endl;

    return 0;
}


int next(int n)
{
    return n + 1;
}

