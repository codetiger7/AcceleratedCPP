// are the following definitions valid? why or why not?
#include <iostream>

int main()
{
    const std::string hello = "Hello"; // valid
    const std::string message = hello + ", world" + "!";

    return 0;
}

