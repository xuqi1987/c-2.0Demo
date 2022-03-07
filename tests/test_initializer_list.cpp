//
// Created by 徐琪 on 2022/3/7.
//

#include <iostream>
#include <string>
using namespace std;

void print(initializer_list<string> values)
{
    for (auto i : values)
    {
        cout << i<<endl;
    }
}

class P
{
public:
    P(int a,int b) {
        cout << "P(int a,int b)" ;
        cout << a << b << endl;
    }
    P(initializer_list<int> initlist) {
        cout << "P(initializer_list<int> initlist)" << endl;
        for (auto i :initlist)
            cout << i << "";
        cout <<endl;
    }
};
int main()
{
    print({"a","b","c"});

    P a1 (1,2);
    P b1 {1,2};
    P c1 {1,2,3};
    P d1 = {1,2};
    return 0;
}