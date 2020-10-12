#include "dep/arr.cpp"
#include "dep/data.cpp"
#include "dep/date.cpp"
#include "dep/ext.cpp"
#include "dep/math.cpp"
#include "dep/string.cpp"
#include "dep/pointer.cpp"
#include "dep/link.cpp"
#include "dep/put.cpp"
#include <iostream>

//如果引用不同的文件中有同名函数，且没有命名空间，那么，会优先解析为第一个文件中的函数

int cnt;
extern void write_extern();

int main()
{
    std::cout << "hello world" << std::endl;
    //arr::test();
    //ms::test();
    //mp::test();
    //ml::test();
    //mdt::test();
    //nput::test();
    //cnt = 5;
    //write_extern();
    //return 0;
}
