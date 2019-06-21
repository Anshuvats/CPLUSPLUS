#include<iostream>
using namespace std;
class Parent{
private:int a;
protected:int b;
public:int c;
void funParent()
{
    a=10;
    b=5;
    c=20;
}
};

class child:public Parent{
public:
    void funChild(){
    //a=10;
    b=5;
    c=20;
    }
};
class grandchild:public child{
void funGrandchild()
{
    //a=10;
    b=5;
    c=20;
}
};
int main()
{
    child c;
    //c.a=10;
    //c.b=20;
    //c.c=30;
}
