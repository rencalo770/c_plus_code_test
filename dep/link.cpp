#include <iostream>

/*
1. 不存在空引用。引用必须连接到一块合法的内存。
2. 一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
3. 引用必须在创建时被初始化。指针可以在任何时间被初始化。
*/

namespace ml
{

    void test()
    {
        // 声明简单的变量
        int i;
        double d;

        // 声明引用变量
        int &r = i;
        double &s = d;

        i = 5;
        std::cout << "Value of i : " << i << std::endl;
        std::cout << "Value of i reference : " << r << std::endl;

        i = 15;
        std::cout << "Value of i : " << i << std::endl;
        std::cout << "Value of i reference : " << r << std::endl;

        r = 100;
        std::cout << "Value of i : " << i << std::endl;
        std::cout << "Value of i reference : " << r << std::endl;

        d = 11.7;
        std::cout << "Value of d : " << d << std::endl;
        std::cout << "Value of d reference : " << s << std::endl;
    }

} // namespace ml
