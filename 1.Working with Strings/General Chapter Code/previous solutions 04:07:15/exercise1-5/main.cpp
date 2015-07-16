// is this program valid? No
// if so what does it do?
// if not say why not and rewrite it to be valid?
// the scope of x is does not cover the printout
#include <iostream>
#include <string>

int main()
{
    {
        std::string s = "a string";
        std::string x = s + ", reallly";

        {
            std::cout << s << std::endl;
        }

        std::cout << x << std::endl;
    }
    return 0;
}

