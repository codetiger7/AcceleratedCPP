// Is the following program valid? yes valid
// If so what does it do? prints a string, then another string
// If not, why not? //
#include <iostream>
#include <string>

int main()
{
    {
        const std::string s = "a string";
        std::cout << s << std::endl;
    }

    {
        const std::string s = "another string";
        std::cout << s << std::endl;
    }
    return 0;
} // end main

