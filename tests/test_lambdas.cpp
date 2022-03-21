//
// Created by 徐琪 on 2022/3/8.
//

#include <iostream>

using namespace std;
int main()
{
    int id1 = 0;
    auto f1 = [id1]() {
        //不允许++
        //cout << id1++ <<endl;
    };

    int id2 = 0;
    auto f2 = [&id2]() {
        cout << id2++ <<endl;
    };
    id2 = 42;
    f2();
    f2();
    f2();

    int id3 = 0;
    auto f3 = [id3] () mutable {
        cout << id3++ << endl;
    };
    id3 = 42;
    f3(); // 输出0，而不是42
    f3();
    f3();
    return 0;
}