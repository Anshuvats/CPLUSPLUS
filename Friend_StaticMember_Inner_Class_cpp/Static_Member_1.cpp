#include<iostream>
using namespace std;
class Innova{
public:
    static int price;
    static int getPrice()
    {
        return price;
    }
};
int Innova::price=20;
int main()
{
    Innova I1,I2,I3;
    cout<<I1.price<<" Lakhs"<<endl;
    cout<<I2.price<<" Lakhs"<<endl;
    cout<<I3.price<<" Lakhs"<<endl;
    cout<<Innova::price<<" Lakhs"<<endl;
}
