#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream ifs;
    ifs.open("My.txt");
    if(ifs.is_open())
    {
        cout<<"File is opened"<<endl;
    }
    string name;
    int roll;
    string position;
    ifs>>name>>roll>>position;
    ifs.close();
    cout<<"Name "<<name<<endl;
    cout<<"Roll "<<roll<<endl;
    cout<<"position "<<position<<endl;
}
