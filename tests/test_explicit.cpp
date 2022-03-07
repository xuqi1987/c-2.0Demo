//
// Created by 徐琪 on 2022/3/7.
//
#include <iostream>
struct Complex
{
    int real,imag;

    //explicit
    Complex(int re,int im=0):real(re),imag(im)
    {

    }

    Complex operator+(const Complex & other)
    {
        return Complex(real+ other.real, imag + other.imag);
    }
};

int main()
{
    Complex a {1,0};
    // 如果构造函数加了explicit ，则无法编译通过，因为不支持隐式转换
    Complex b = a + 5;
    return 0;
}
