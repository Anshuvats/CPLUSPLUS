#include<iostream>
using namespace std;
class Rectangle{
private:
    int length;
    int breadth;
public:
    Rectangle();             // Non-parametric constructor or Default Constructor
    Rectangle(int l,int b);  // Parametric constructor
    Rectangle(Rectangle &r); //copy constructor
    void setLength(int l);   //Mutator
    void setBreadth(int b);  //Mutator
    int getLength();         //Accessor
    int getBreadth();        //Accessor
    int area();              //Facilator
    int perimeter();         //Facilator
    bool isSquare();         //Enquoiry
    ~Rectangle();            //destructor
};
int main()
{
 Rectangle r1(12,113);
 cout<<"Area "<<r1.area()<<endl;
 if(r1.isSquare())
 {

     cout<<"Yes"<<endl;
 }
 else
 {
     cout<<"No"<<endl;
 }

}
Rectangle::Rectangle(){
length=1;
breadth=1;
}
Rectangle::Rectangle(int l,int b){
length=l;
breadth=b;
}
Rectangle::Rectangle(Rectangle &r)
{
length=r.length;
breadth=r.breadth;
}
void Rectangle::setLength(int l){
length=l;
}
void Rectangle::setBreadth(int b){
breadth=b;
}
int Rectangle::getLength(){
return length;
}
int Rectangle::getBreadth(){
return breadth;
}
int Rectangle::area(){
return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
bool Rectangle::isSquare(){
return length==breadth;
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle Distroyed"<<endl;
}
