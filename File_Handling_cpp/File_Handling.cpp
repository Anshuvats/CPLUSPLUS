#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofs("My.txt");
    ofs<<"Anshu"<<endl;
    ofs<<"20"<<endl;
    ofs<<"programmer"<<endl;
    ofs.close();
}
