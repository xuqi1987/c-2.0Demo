//
// Created by 徐琪 on 2022/3/7.
//
#include <iostream>

using namespace std;

void f(int) {
    cout << "call int" << endl;
};
void f(void*) {
    cout << "call void*" << endl;
};

int main()
{
    f(0);
    //f(NULL); 产生歧义
    f(nullptr);
    return 0;
}