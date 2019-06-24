#include<iostream>
using namespace std;
class Demo{
public:
    int x=10;
    int y=20;
    void display()const
    {
        //x++;
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{
  Demo d;
  d.display();
}
