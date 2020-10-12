#include <iostream>

namespace nput
{
    void test()
    {
        char name[50];
        std::cout << "input your name:";
        std::cin >> name;
        std::cout << "your name is " << name << std::endl;
    }

} // namespace nput
