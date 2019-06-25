#include<iostream>
#include<fstream>
using namespace std;
class Student{
public:
    string name;
    int roll;
    string position;
    friend ofstream & operator<<(ofstream &ofs,Student &s);
    friend ifstream & operator>>(ifstream &ifs,Student &s);
};
ifstream & operator>>(ifstream &ifs,Student &s)
{
    ifs>>s.name>>s.roll>>s.position;

    return ifs;
}
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
    //ofstream ofs("Student.txt",ios::trunc);
    ifstream ifs("Student.txt");
    ifs>>s1;
    cout<<"Name "<<s1.name<<endl;
    cout<<"Roll "<<s1.roll<<endl;
    cout<<"position "<<s1.position<<endl;
    ifs.close();
}

