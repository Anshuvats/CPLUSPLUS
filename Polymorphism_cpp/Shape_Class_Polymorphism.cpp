#include<iostream>
using namespace std;
class shape{
public:
    virtual float area()=0;
    virtual float perimeter()=0;
};
class Rectangle:public shape
{
private:
    float length;
    float breadth;
public:
    Rectangle(int l=1,int b=1)
    {
        length=l;
        breadth=b;
    }
    float area()
    {
        return length*breadth;
    }
    float perimeter()
    {
        return 2*(length+breadth);
    }
};
class Circle:public shape{
private:
    float radius;
public:
    Circle(int r=1)
    {
        radius=r;
    }
    float area()
    {
        return 3.14*radius*radius;
    }
    float perimeter()
    {
        return 2.0*3.14*radius*radius;
    }
};
int main()
{
    shape *p=new Rectangle(10,5);
    cout<<"Area of Rectangle "<<p->area()<<endl;
    cout<<"Perimeter of Rectangle "<<p->perimeter()<<endl;
    p=new Circle(10);
    cout<<"Area of Circle "<<p->area()<<endl;
    cout<<"cicumference of Circle "<<p->perimeter()<<endl;
    return 0;
}
