//
// Created by 徐琪 on 2022/3/7.
//

#include <iostream>
#include <string>

using namespace std;

class Empty {
public:
    Empty() = default;
    Empty(const Empty& other) =default;
    Empty(Empty&& other) = default;
    Empty &operator=(const Empty &other) =default;
    Empty &operator=(Empty &&other) = default;
    ~Empty() =default;
private:
    string mData;
};

int main()
{
    return 0;
}