//
// Created by 徐琪 on 2022/3/7.
//

#include <iostream>
using namespace std;

void print()
{

}
template <typename T,typename...Type>
void print(const T& firstArg, const Type&... args)
{
    cout << firstArg << endl;
    print(args...);
}

int main()
{
    print(7.5,bitset<16>(377),42);
    return 0;
}