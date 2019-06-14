#include<iostream>
using namespace std;
class Base{
public:
    int a;
    void display(){
       cout<<"Display of base "<<a<<endl;
    }
};
class Derived:public Base{
public:
    void show(){
    cout<<"showing of derived class"<<endl;
    }
};
int main()
{
    Derived d;
    d.a=100;
    d.display();
    d.show();
}
