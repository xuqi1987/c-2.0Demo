//
// Created by 徐琪 on 2022/3/8.
//
#include <iostream>
#include <string>
#include <set>
using namespace std;
// 适用于返回值的判断
template <typename A,typename B>
auto Add(A a,B b) -> decltype(a+b)
{
    return a+b;
}

// 适用于模版类型的推到
template <typename T>
void test(T obj)
{
    typedef typename decltype(obj)::iterator iType1;
    typedef typename T::iterator iType2;
}


int main()
{
    auto c = Add(string("aaa") , string("bbb"));
    cout << c << endl;

    // 适用于lambda
    auto cmp = [](){};
    set<string, decltype(cmp)> coll(cmp);
    return 0;
}