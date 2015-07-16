/// 1-2
/// valid or not
/// why/why not?
#include <iostream>
#include <string>


int main()
{
    /// valid
    const std::string exclam = "!";

    /// invalid
    /// left associative, string lit concat with string literal is a no go
    const std::string message = "Hello" + ", world" + exclam;

    std::cout << message;

    return 0;
}

