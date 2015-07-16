/// 1-6
/// what does the program do
/// if you type two names
/// predict behaviour then try it
///
/// it will write out samuel the first and then  second name
#include <string>
#include <iostream>

int main()
{
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;

    std::cout << "Hello, " << name
              << std::endl << "And what is yours? ";
    std::cin >> name;
    std::cout << "Hello, " << name
              << "; nice to meet you too!" << std::endl;
    return 0;
}

