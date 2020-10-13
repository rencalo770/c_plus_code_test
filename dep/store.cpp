#include <iostream>

//内存分配

void testV()
{
    double *pv = NULL;      // 初始化为 null 的指针
    if (!(pv = new double)) // 为变量请求内存
    {
        *pv = 2929.8;
        std::cout << "Value of pv:" << *pv << std::endl;
        delete pv;
    }
}

void testA()
{
    int **p;
    int i, j; //p[4][8]
    //开始分配4行8列的二维数据
    p = new int *[4];
    for (i = 0; i < 4; i++)
    {
        p[i] = new int[8];
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            p[i][j] = j * i;
        }
    }

    //打印数据
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (j == 0)
                std::cout << std::endl;
            std::cout << p[i][j] << "\t";
        }
    }

    //开始释放申请的堆
    for (i = 0; i < 4; i++)
    {
        delete[] p[i];
    }
    delete[] p;
}

void test3()
{

    int i, j, k; // p[2][3][4]

    int ***p;
    p = new int **[2];
    for (i = 0; i < 2; i++)
    {
        p[i] = new int *[3];
        for (j = 0; j < 3; j++)
            p[i][j] = new int[4];
    }

    //输出 p[i][j][k] 三维数据
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                p[i][j][k] = i + j + k;
                std::cout << p[i][j][k] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    // 释放内存
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            delete[] p[i][j];
        }
    }
    for (i = 0; i < 2; i++)
    {
        delete[] p[i];
    }
    delete[] p;
}

int main()
{
    testV();
    testA();
    test3();
}