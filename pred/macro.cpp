#include <iostream>
using namespace std;

//创建常量符号
#define PI 3.14159

void testDefine()
{
    cout << "Value of PI :" << PI << endl;
}

//创建参数宏
#define MIN(a, b) (a < b ? a : b)
void testParam()
{
    int i, j;
    i = 100;
    j = 30;
    cout << "较小值" << MIN(i, j) << endl;
}

#define DEBUG

void testConditionCompile()
{
    int i, j;
    i = 100;
    j = 30;
#ifdef DEBUG
    cerr << "Trace: Inside main function" << endl;
#endif

#if 0
   /* 这是注释部分 */
   cout << MKSTR(HELLO C++) << endl;
#endif
    cout << "The minimum is " << MIN(i, j) << endl;

#ifdef DEBUG
    cerr << "Trace: Coming out of main function" << endl;
#endif
}

//预定义的一些宏
void testPreDefine()
{
    cout << "Value of __LINE__ : " << __LINE__ << endl;
    cout << "Value of __FILE__ : " << __FILE__ << endl;
    cout << "Value of __DATE__ : " << __DATE__ << endl;
    cout << "Value of __TIME__ : " << __TIME__ << endl;
}
