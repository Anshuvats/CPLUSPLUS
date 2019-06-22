#include<iostream>
using namespace std;
class Car{
public:
   virtual void start()=0;
    /*{
        cout<<"Car is started"<<endl;
    }*/
   virtual void stop()=0;
    /*{
      cout<<"Car is Stopped"<<endl;
    }*/
};
class Innova:public Car
{
public:
    void start()
    {
        cout<<"Innova is started"<<endl;
    }
    void stop()
    {
        cout<<"Innova is stopped"<<endl;
    }
} ;
class swift:public Car
{
public:
    void start()
    {
        cout<<"swift is started"<<endl;
    }
    void stop()
    {
        cout<<"swift is stopped"<<endl;
    }
};
int main()
{
    Car *p=new Innova();
    p->start();
    p->stop();
    p=new swift();
    p->start();
    p->stop();
}
