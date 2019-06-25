#include<iostream>
#include<fstream>
using namespace std;
class Student{
public:
    string name;
    int roll;
    string position;
    friend ofstream & operator<<(ofstream &ofs,Student &s);
};
ofstream & operator<<(ofstream &ofs,Student &s)
{
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.position<<endl;
    return ofs;
}
int main()
{
    Student s1;
    s1.name="Anshu";
    s1.roll=20;
    s1.position="programmer";
    ofstream ofs("Student.txt",ios::trunc);
    /*ofs<<s1.name<<endl;
    ofs<<s1.roll<<endl;
    ofs<<s1.position<<endl;*/

    ofs<<s1;//serialization
    ofs.close();
}
