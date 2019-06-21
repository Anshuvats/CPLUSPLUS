#include<iostream>
using namespace std;
class BasicCar{
public:
    void start()
    {
        cout<<"BasicCar is starting"<<endl;
    }
};
class AdvancedCar:public BasicCar{
public:
    void music()
    {
        cout<<"AvancedCar is palying music as well as start"<<endl;
    }
};
int main()
{
    AdvancedCar c;
    BasicCar *p=&c;
    p->start();
}


