#include<iostream>
using namespace std;
class Outer{
public:
    void fun()
    {
     i.display();
    }
    class Inner{
public:
    void display()
    {
        cout<<"Display of inner"<<endl;
    }
    };
    Inner i;
};
int main()
{
    Outer::Inner i;
}
