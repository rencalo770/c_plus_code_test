#include <iostream>

namespace mp
{
    void test()
    {
        int var1;
        char var2[10];
        std::cout << "var1 变量的地址： ";
        std::cout << &var1 << std::endl;

        std::cout << "var2 变量的地址： ";
        std::cout << &var2 << std::endl;
   
        int var = 20;
        int *ip;
        ip = &var;

        // 输出在指针变量中存储的地址
        std::cout << "Address stored in ip variable: " << ip << std::endl;

        // 访问指针中地址的值
        cout << "Value of *ip variable: " << *ip << endl;
    }

} // namespace mp