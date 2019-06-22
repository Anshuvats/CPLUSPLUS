#include<iostream>
using namespace std;
class BaseCar{
public:
    virtual void start()
    {
        cout<<"BaseCar is started"<<endl;
    }
};
class AdvancedCar:public BaseCar{
public:
    void start()
    {
        cout<<"AdvancedCar is started"<<endl;
    }
};
int main()
{
    BaseCar *p=new AdvancedCar();
    p->start();
}
