//
// Created by 徐琪 on 2022/3/7.
//

#include <iostream>
using namespace std;

// 例6:
template <typename... Tail> class Tuple;// 声明类

template<> class Tuple<> {}; // 定义无参数类

template <typename Head,typename... Tail>
class Tuple<Head,Tail...> : private Tuple<Tail...>
{
    typedef Tuple<Tail...> inherited;
public:
    Tuple(){};
    Tuple(Head head,Tail... tail)
    : m_head {head}
    , inherited{tail...} // 调用基类构造函数
    {

    }

    inherited& tail() {
        return *this;
    }
    auto head() {
        return m_head;
    }
private:
    Head m_head;
};

int main()
{
    Tuple<int,std::string,float> tu {1,"string",1.0};
    cout << tu.head() <<" "<< tu.tail().head() <<" "<<tu.tail().tail().head();
    return 0;
}