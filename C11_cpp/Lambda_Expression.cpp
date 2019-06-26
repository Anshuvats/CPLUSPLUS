#include<iostream>
using namespace std;
int main()
{
    [](){cout<<"Hello"<<endl;}();
    [](int x,int y){cout<<"sum is "<<x+y<<endl;}(10,30);
    cout<<([](int x,int y){return x+y;}(10,30))<<endl;
    int a=[](int x,int y){return x+y;}(10,30);
    cout<<a<<endl;
    //int a=10;
    auto f=[&a](){cout<<a<<endl;};
    f();
    a++;
    f();
}
