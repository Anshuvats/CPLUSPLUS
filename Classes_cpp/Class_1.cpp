#include <iostream>
using namespace std;
class Rectagle {
public:
int length;
int breadth;
int area()
{
    return length*breadth;
}
int perimeter()
{
    return 2*(length+breadth);
}
};
int main()
{
  Rectagle r1,r2;
  cin>>r1.length>>r1.breadth>>r2.length>>r2.breadth;
  cout<<"Area1 is "<<r1.area()<<"\n"<<"perimeter1 is "<<r1.perimeter()<<endl;
  cout<<"Area2 is "<<r2.area()<<"\n"<<"perimeter2 is "<<r2.perimeter()<<endl;
  return 0;
}

