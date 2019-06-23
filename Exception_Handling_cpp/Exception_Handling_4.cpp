#include<iostream>
using namespace std;
class Myexception1:exception
{

};
class Myexception2:public Myexception1;
{

};
int main()
{
  try{
  throw Myexception1();
  }
  catch(Myexception2 e)
  {
      cout<<"Int Catch"<<endl;
  }
  catch(Myexception1 e)
  {
      cout<<"Double Catch"<<endl;
  }
  catch(...)
  {
      cout<<"All Catch"<<endl;
  }
}
