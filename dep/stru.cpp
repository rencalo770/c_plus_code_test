#include <iostream>
#include <cstring>
namespace mst
{
    struct Book
    {
        char title[50];
        char author[50];
        char subject[100];
        int id;
    } book;

    void test1()
    {

        Book Book1; // 定义结构体类型 Books 的变量 Book1
        Book Book2; // 定义结构体类型 Books 的变量 Book2

        // Book1 详述
        strcpy(Book1.title, "C++ 教程");
        strcpy(Book1.author, "Runoob");
        strcpy(Book1.subject, "编程语言");
        Book1.id = 12345;

        // Book2 详述
        strcpy(Book2.title, "CSS 教程");
        strcpy(Book2.author, "Runoob");
        strcpy(Book2.subject, "前端技术");
        Book2.id = 12346;

        // 输出 Book1 信息
        std::cout << "第一本书标题 : " << Book1.title << std::endl;
        std::cout << "第一本书作者 : " << Book1.author << std::endl;
        std::cout << "第一本书类目 : " << Book1.subject << std::endl;
        std::cout << "第一本书 ID : " << Book1.id << std::endl;

        // 输出 Book2 信息
        std::cout << "第二本书标题 : " << Book2.title << std::endl;
        std::cout << "第二本书作者 : " << Book2.author << std::endl;
        std::cout << "第二本书类目 : " << Book2.subject << std::endl;
        std::cout << "第二本书 ID : " << Book2.id << std::endl;
    }

    void printBook(struct Books book);
    void test2()
    {
        Book Book1; // 定义结构体类型 Books 的变量 Book1
        Book Book2; // 定义结构体类型 Books 的变量 Book2

        // Book1 详述
        strcpy(Book1.title, "C++ 教程");
        strcpy(Book1.author, "Runoob");
        strcpy(Book1.subject, "编程语言");
        Book1.id = 12345;

        // Book2 详述
        strcpy(Book2.title, "CSS 教程");
        strcpy(Book2.author, "Runoob");
        strcpy(Book2.subject, "前端技术");
        Book2.id = 12346;

        // 输出 Book1 信息
        printBook(Book1);

        // 输出 Book2 信息
        printBook(Book2);
    }
    void printBook(struct Book book)
    {
        std::cout << "书标题 : " << book.title << std::endl;
        std::cout << "书作者 : " << book.author << std::endl;
        std::cout << "书类目 : " << book.subject << std::endl;
        std::cout << "书 ID : " << book.id << std::endl;
    }

    void printBook(struct Book *book)
    {
        std::cout << "书标题  : " << book->title << std::endl;
        std::cout << "书作者 : " << book->author << std::endl;
        std::cout << "书类目 : " << book->subject << std::endl;
        std::cout << "书 ID : " << book->id << std::endl;
    }

    typedef struct Books
    {
        char title[50];
        char author[50];
        char subject[100];
        int book_id;
    } Books;

} // namespace mst
