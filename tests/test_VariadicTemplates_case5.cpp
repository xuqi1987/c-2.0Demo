//
// Created by 徐琪 on 2022/3/7.
//

#include <iostream>
using namespace std;

// 例5:

template <int IDX,int MAX,typename... Args>
struct PRINT_TUPLE {
    static void print(ostream &os, const std::tuple<Args...> &t)
    {
        os << get<IDX>(t) << (IDX + 1 == MAX ? "":",");
        PRINT_TUPLE<IDX+1,MAX,Args...>::print(os,t);
    }
    };

template <int MAX ,typename... Args>
struct PRINT_TUPLE <MAX,MAX,Args...> {
    static void print(ostream &os, const std::tuple<Args...> &t)
    {

    }
};

template<typename... Args>
ostream& operator<<(ostream &os, const std::tuple<Args...> &t)
{
    os << "[";
    PRINT_TUPLE<0, sizeof...(Args),Args...>::print(os,t);
    return os << "]";
}

int main()
{
    cout << make_tuple(5,std::string("hello"),7.5);
    return 0;
}