#include<iostream>
using namespace std;
int Division(int x,int y)throw(int)
{
    if(y==0)
        throw 10;
    return x/y;
}
int main()
{
  int a=10,b=2;
  try{
  cout<<Division(a,b)<<endl;
  }
  catch(int e)
  {
    cout<<"Division by Zero"<<endl;
  }
  cout<<"Bye!"<<endl;
}

