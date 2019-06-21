#include<iostream>
using namespace std;
class Base{
public:
    void fun1(){
    cout<<"fun1 of Base"<<endl;
    }
};
class Derived:public Base
{
public:
    void fun2(){
    cout<<"fun2 of derived"<<endl;
    }
};
int main()
{
    Derived d;
    Base *ptr=&d;
    ptr->fun1();
    //d.fun1();
    d.fun2();
}
