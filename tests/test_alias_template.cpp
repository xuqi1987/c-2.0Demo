//
// Created by 徐琪 on 2022/3/7.
//
#include <iostream>
#include <list>
#include <vector>
#include <string>

using namespace std;

template<typename C>
void test_moveable(C c) {
    // 根据容器的方法推导出容器内部的数据类型
    typedef typename iterator_traits<typename C::iterator>::value_type ValType;

    // 使用该类型对容器增加元素
    c.insert(c.end(), ValType());
    cout << c.size() << endl;

}

template<typename ValType, template<class> class C>
class B {
private:
    C<ValType> mC;
public:
    B() {
        mC.insert(mC.end(), ValType());
        cout << mC.size() << endl;
    }
};

// 只有用过alias template后，才能编译通过
template <typename T>
using Vec = vector<T,allocator<T>>;
template <typename T>
using List = list<T,allocator<T>>;

int main() {
    test_moveable(list<string>());
    test_moveable(vector<string>());

    B<string, List> b1;
    B<string, Vec> b2;
    return 0;
}
