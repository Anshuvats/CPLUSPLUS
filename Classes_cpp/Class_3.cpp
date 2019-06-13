#include<iostream>
using namespace std;
class Rectangle{
private:
    int length;
    int breadth;
public:
    void setLength(int l){
    length=l;
    }
    int getLength()
    {
        return length;
    }
    void setBreadth(int b){
    breadth=b;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area(){
    return length*breadth;
    }
    int perimeter(){
    return 2*(length+breadth);
    }
};
int main()
{
    Rectangle r1;
    r1.setLength(10);
    r1.setBreadth(20);
    cout<<r1.area()<<" "<<r1.perimeter()<<endl;
    cout<<r1.getLength()<<" "<<r1.getBreadth()<<endl;
    return 0;
}
