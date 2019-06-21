#include<iostream>
using namespace std;
class Employee{
private:
    int eid;
    string name;
public:
    Employee(int e,string n)
    {
        eid=e;
        name=n;
    }
    int getEmployeeId(){
    return eid;
    }
    string getEmployeeName(){
    return name;
    }
};
class FulltimeEmployee:public Employee{
private:
    int salary;
public:
    FulltimeEmployee(int e,string n,int s):Employee(e,n){
    salary=s;
    }
    int getSalary()
    {
        return salary;
    }
};
class parttimeEmployee:public Employee{
private:
    int wage;
public:
    parttimeEmployee(int e,string n,int w):Employee(e,n){
    wage=w;
    }
    int getWage()
    {
        return wage;
    }
};
int main()
{
    parttimeEmployee p1(1,"Vats",500);
    FulltimeEmployee f1(2,"Anshu",15000);
    cout<<"Salary of "<<f1.getEmployeeName()<<" is $"<<f1.getSalary()<<" per month"<<endl;
    cout<<"Daily wages of "<<p1.getEmployeeName()<<" is $"<<p1.getWage()<<" per day"<<endl;
}
