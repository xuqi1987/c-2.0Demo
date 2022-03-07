//
// Created by 徐琪 on 2022/3/7.
//
#include <string>
#include <iostream>
#include <list>

using namespace std;

int main()
{
   list<string> a {"a","b","c","l","k"};

   string target{"l"};
   auto i = find(a.begin(),a.end(),target);
   if (i != a.end())
   {
       cout << "find target"<<endl;
   }
    return 0;
}