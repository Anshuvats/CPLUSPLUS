#include <iostream>
using namespace std;
class Base{
public:
    Base(){
    cout<<"Non-param Base"<<endl;
    }
    Base(int x)
    {
        cout<<"Param of Derived "<<x<<endl;
    }
};
class Derived:public Base
{public:
    Derived(){
    cout<<"Non-param derived"<<endl;}
    Derived(int x,int y):Base(x)
    {cout<<"Param of derived is "<<y<<endl;}
};

int main(){
    Derived d(5,10);
}
