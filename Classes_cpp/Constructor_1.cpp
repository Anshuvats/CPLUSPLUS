#include<iostream>
using namespace std;
class Rectangle{
private:
    int length;
    int breadth;
public:
    /*Rectangle()
    {
        length=1;        // Default constructor or Non-parametric constructor
        breadth=1;
    }*/
    Rectangle(int l,int b)
    {
        setLength(l);         // Parametric constructor
        setBreadth(b);
    }
    Rectangle(Rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }
    void setLength(int l)
    {
        length=l;
    }
    int getLength()
    {
        return length;
    }
    void setBreadth(int b)
    {
        breadth=b;
    }
    int getBreadth()
    {
        return breadth;
    }
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
    Rectangle r1(10,5);
    Rectangle r2(r1);
    cout<<r2.area()<<endl;
    return 0;
}
