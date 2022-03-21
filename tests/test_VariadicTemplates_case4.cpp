//
// Created by 徐琪 on 2022/3/7.
//

#include <iostream>
using namespace std;

// 例4:
template<typename  T>
T maxnum(T num)
{
    return num;
}

template <typename T,typename...Type>
T maxnum(T n, const Type&... args)
{
    return std::max(n, maxnum(args...));
}

int main()
{
    cout << maxnum(57,47,33,34,56) << endl;
    return 0;
}