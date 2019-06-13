#include<iostream>
using namespace std;
class Student{
private:
    int roll;
    string name;
    int math;
    int physics;
    int chemistry;
    int english;
    int painting;
public:
    Student(int r,string n,int m,int p,int c,int e,int pa){
    roll=r;
    name=n;
    math=m;
    physics=p;
    chemistry=c;
    english=e;
    painting=pa;
    }
    int total(){
    return math+physics+chemistry+english+painting;
    }
    char grade()
    {
        float avg=total()/5;
        if(avg>=60)
        {
            return 'A';
        }
        else if(avg>=40 && avg<60)
        {
            return 'B';
        }
        else
        {
            return 'C';
        }
    }
};
int main()
{
    int roll;
    cout<<"Enter the Roll No:- "<<endl;
    cin>>roll;
    string name;
    cout<<"Enter the Name of Student:- "<<endl;
    cin>>name;
    int m,p,c,e,pa;
    cout<<"Enter your Marks:- "<<endl;
    cin>>m>>p>>c>>e>>pa;
    Student s(roll,name,m,p,c,e,pa);
    cout<<"Total Marks is "<<s.total()<<endl;
    cout<<"Your Grades is:- "<<s.grade()<<endl;
}
