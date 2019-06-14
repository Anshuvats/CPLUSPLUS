#include<iostream>
using namespace std;
class Base{
public:
    void display(){
    cout<<"Display of Base"<<endl;
    }
};
class Derived:public Base{};
int main()
{
    Derived d;
    d.display();
}
