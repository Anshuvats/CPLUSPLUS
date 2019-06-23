#include<iostream>
using namespace std;
class Student{
public:
    int roll;
    string name;
    static int addNo;
    Student(string n)
    {
        name=n;
        addNo++;
        roll=addNo;
    }
    void display()
    {
        cout<<"Name:- "<<name<<" "<<"Roll No:- "<<roll<<endl;
    }
};
int Student::addNo=0;
int main()
{
    Student s1("Anshu");
    Student s2("Anupam");
    Student s3("Vaibhav");
    Student s4("Ankush");
    Student s5("Aman");
    Student s6("Abhishek");
    Student s7("Vartika");
    Student s8("Aniket");
    Student s9("Varsha");
    s1.display();
    s9.display();
    cout<<"Number admission "<<Student::addNo<<endl;
}
