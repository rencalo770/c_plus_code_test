#include <iostream>

/**
 * 在类中定义的函数，都是内联函数，
 * 其他使用inline申明的函数，也是内联函数
 * 
 * 
 * 
 */

class person
{
private:
    //成员变量
    int *ptr;

public:
    //构造函数
    person(/* args */);
    //拷贝构造函数
    person(const person &person);
    //析构函数
    ~person();
    //成员函数
    void say(void);
};

person::person(/* args */)
{
}

person::person(const person &p)
{
    std::cout << "调用拷贝构造函数并为指针 ptr 分配内存" << std::endl;
    ptr = new int;
    *ptr = *p.ptr; // 拷贝值
}

person::~person()
{
    std::cout << "释放内存" << std::endl;
    delete ptr;
}

void person::say()
{
    std::cout << "i am a person"
              << "\n";
}