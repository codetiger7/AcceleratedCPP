/// 1-5:
/// valid ? if not why?
/// No,x doe not exist outside block
///
/// rewrite it be valid
/// what does it do?
#include <iostream>
#include <string>

int main()
{
    {
        std::string s = "a string";

        {
            std::string x = s + ", really";
            std::cout << s << std::endl;
            std::cout << x << std::endl;
        }
    }
    return 0;
}

