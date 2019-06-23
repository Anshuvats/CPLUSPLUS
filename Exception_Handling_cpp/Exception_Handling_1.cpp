#include<iostream>
using namespace std;
int main()
{
    int a=10,b=0,c;
    try{
     if(b==0)
        throw 1;
     cout<<a/b<<endl;
    }
    catch(int e)
    {
        cout<<"Division by Zero "<<e<<endl;
    }
    cout<<"Bye!"<<endl;
}
