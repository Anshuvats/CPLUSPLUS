#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> V={2,4,6,8,10,20,30};
    V.push_back(40);
    V.push_back(60);
    V.pop_back();
    list<int>::iterator itr;
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

