#include <iostream>

using namespace std;

int next(int n);

int main()
{
    // ptr to function
    int (*fp)(int);
    fp = &next;

    // call function via ptr
    int i = 9;
    i = fp(i);

    // write result
    cout << "\n\ni = " << i << endl;


    // another ptr function
    int (*ptrToFunc)(int);
    ptrToFunc = next;

    // call fucntion via ptr
    int a = 19;
    a = (*ptrToFunc)(a);

    // display result
    cout << "\n\na = " << a << endl << endl;

    return 0;
}


int next(int n)
{
    return n + 1;
}
