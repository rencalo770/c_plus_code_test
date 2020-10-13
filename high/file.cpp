#include <fstream>
#include <iostream>

namespace mf
{
    void test()
    {
        //char data[100];
        //以写模式打开文件
        std::ofstream outfile;
        outfile.open("hello.txt");

        //std::cout << "Writing to the file" << std::endl;
        //std::cout << "Enter your name: ";
        //std::cin.getline(data, 100);

        std::string data = "hello world";
        outfile << data << std::endl;

        //关闭文件
        outfile.close();

        std::string data1;
        //以读模式打开文件
        std::ifstream infile;
        infile.open("hello.txt");
        std::cout << "Read from file" << std::endl;
        
        //不是读取全部内容
        infile >> data1;
        std::cout << data1 << std::endl;

        //infile >> data1;
        //std::cout << data1 << std::endl;

        infile.close();
    }
} // namespace mf

int main()
{

    mf::test();
}