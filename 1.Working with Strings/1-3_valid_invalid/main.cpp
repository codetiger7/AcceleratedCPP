/// 1-3:
/// valid invalid? and why?
/// valid: s has a scope til the end of the block
/// after that it can be defined anew
#include <iostream>
#include <string>

int main()
{
    { const std::string s = "a string";
        std::cout << s << std::endl; }

    { const std::string s = "another string";
        std::cout << s << std::endl; }
    return 0;
}

