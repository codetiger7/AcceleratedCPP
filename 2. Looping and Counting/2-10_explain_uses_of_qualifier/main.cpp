/// 2-10
/// Explain uses of std:: in the program
#include <iostream>

int main()
{
    int k = 0;

    /// invariant have written k asterisks so far
    while( k != 10)
    {
        /// says that any use of cout in block
        /// is to be considered use of std::cout
        using std::cout;
        cout << "*";
        ++k;
    }

    /// previous using declaration is not valid for this scope
    std::cout << std::endl;

    return 0;
}

