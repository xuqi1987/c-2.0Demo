//
// Created by 徐琪 on 2022/3/7.
//

#include <iostream>
using namespace std;

// 例2:
// 当参数个数为0时，调用的函数
void print(const char *s)
{
    while (*s)
    {
        if ((*s == '%') && (*(++s) != '%s'))
        {
            throw std::runtime_error("invalid format string: missing arg");
        }
        cout << *s++;
    }
}

// 参数类型可变，参数个数可变
template <typename T,typename...Type>
void print(const char *s, const T& firstArg, const Type&... args)
{
    while (*s)
    {
       if ((*s == '%') && (*(++s) != '%s'))
       {
           cout << firstArg;
           print(++s, args...);
           return;
       }
        cout << *s++;
    }
    throw std::logic_error("extera arguments provided to print");

}


int main()
{
    print("%d  %s %d\n", 1,"hello",2);
    return 0;
}