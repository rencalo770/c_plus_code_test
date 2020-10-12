#include <iostream>

class Print{

public:
  void print(int i) {
        std::cout << "整数为: " << i << std::endl;
      }
 
      void print(double  f) {
        std::cout << "浮点数为: " << f << std::endl;
      }
 
      void print(char c[]) {
        std::cout << "字符串为: " << c << std::endl;
      }

};