#include<iostream>
using namespace std;
class Base{
public:
    virtual void fun1()=0;
    /*{
        cout<<"fun1 Of base"<<endl;
    }*/
   virtual void fun2()=0;
    /*{
        cout<<"fun2 Of base"<<endl;
    }*/
};
class Derived:public Base{
public:
    void fun1(){
    }
    void fun2()
    {
        cout<<"fun2 from Derived"<<endl;
    }
};
int main()
{
    Derived d;
    d.fun2();
}
