#include<iostream>
using namespace std;
class Base{
public:
   virtual void fun()
    {
        cout<<"fun is the base"<<endl;
    }
};
class Derived:public Base{
public:
    void fun()
    {
        cout<<"fun is the derived"<<endl;
    }
};
int main()
{
    //Derived d1;
    //Base *p=&d1;
    Base *p=new Derived;
    p->fun();
}
