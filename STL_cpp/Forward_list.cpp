#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> V={2,4,6,8,10,20,30};
    V.push_front(40);
    V.push_front(60);
    forward_list<int>::iterator itr;
    cout<<"Using Iterator"<<endl;
    for(itr=V.begin();itr!=V.end();itr++)
    {
        cout<<++*itr<<endl;
    }
    cout<<"Using for each loop"<<endl;
    for(int x:V)
    {
        cout<<x<<endl;
    }
}


