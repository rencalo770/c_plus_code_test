#include <iostream>
#include <ctime>

namespace mdt
{
    void test()
    {
        // 基于当前系统的当前日期/时间
        time_t now = time(0);

        //把now转换为字符串形式
        char *dt = ctime(&now);
        std::cout << "本地日期和时间：" << dt << std::endl;

        // 把 now 转换为 tm 结构
        tm *gmtm = gmtime(&now);
        dt = asctime(gmtm);
        std::cout << "UTC 日期和时间：" << dt << std::endl;

        // 基于当前系统的当前日期/时间
        time_t now1 = time(0);

        std::cout << "1970 到目前经过秒数:" << now1 << std::endl;

        tm *ltm = localtime(&now1);

        // 输出 tm 结构的各个组成部分
        std::cout << "年: " << 1900 + ltm->tm_year << std::endl;
        std::cout << "月: " << 1 + ltm->tm_mon << std::endl;
        std::cout << "日: " << ltm->tm_mday << std::endl;
        std::cout << "时间: " << ltm->tm_hour << ":";
        std::cout << ltm->tm_min << ":";
        std::cout << ltm->tm_sec << std::endl;
    };

} // namespace mdt