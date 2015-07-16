/// 1-4 :
/// valid? yes
/// valid if we change  }} to };} on third line from the end?
/// yes just an empty statement ;
#include <iostream>
#include <string>

int main()
{
    { const std::string s = "a string";
        std::cout << s << std::endl;

        { const std::string s = "another string";
            std::cout << s << std::endl; } ; }
    return 0;
}

