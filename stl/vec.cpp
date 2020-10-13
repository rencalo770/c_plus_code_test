#include <iostream>
#include <vector>
using namespace std;

//标准模版库
int main()
{
    vector<int> vec;
    int i;
    // 显示 vec 的原始大小
    cout << "vector size = " << vec.size() << endl;

    //推入5个值到向量中
    for (int i = 0; i < 5; i++)
    {
        vec.push_back(i);
    }
    // 显示 vec 扩展后的大小
    cout << "extended vector size = " << vec.size() << endl;

    // 访问向量中的 5 个值
    for (i = 0; i < 5; i++)
    {
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }

    vector<int>::iterator v = vec.begin();
    while (v != vec.end())
    {
        cout << "value of v = " << *v << endl;
        v++;
    }
}
