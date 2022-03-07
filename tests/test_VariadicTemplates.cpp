//
// Created by 徐琪 on 2022/3/7.
//

#include <iostream>
using namespace std;

// 当参数个数为0时，调用的函数
void print()
{
    cout <<"has no args " << endl;
}

// 参数类型可变，参数个数可变
template <typename T,typename...Type>
void print(const T& firstArg, const Type&... args)
{
    cout <<sizeof...(args) << ": "<< firstArg <<endl;
    // 递归调用
    print(args...);
}

// 可以和上面的函数并存，并不会报错，只会选择特化的那个函数。
template <typename... Type>
void print(const Type&... args)
{
    cout << "call me ,args size = " << sizeof...(args) << endl;
}

int main()
{
    print(7.5,bitset<16>(377),42, "hello~");
    return 0;
}