#include "dep/arr.cpp"
#include "dep/data.cpp"
#include "dep/ext.cpp"
#include "dep/math.cpp"
#include "dep/string.cpp"
#include <iostream>

//如果引用不同的文件中有同名函数，且没有命名空间，那么，会优先解析为第一个文件中的函数

int cnt;
extern void write_extern();

int main()
{
    std::cout << "hello world" << std::endl;
    //arr::test();
    ms::test();
    //cnt = 5;
    //write_extern();
    //return 0;
}
