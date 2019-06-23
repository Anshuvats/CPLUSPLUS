#include<iostream>
using namespace std;
class My{
private:
    int a;
protected:
    int b;
public:
    int c;
friend Your;
};
class Your{
public:
    My m;
    void fun()
    {
        m.a=10;
        m.b=20;
        m.c=30;
    }
};
int main()
{

}

