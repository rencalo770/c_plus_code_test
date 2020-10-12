#include <iostream>
#include <string>

namespace ms
{
    void test()
    {
        char dst[2];
        std::string src = "qwrt";
        src.copy(dst, 1, 2);
        std::cout << dst;
    }
} // namespace ms
