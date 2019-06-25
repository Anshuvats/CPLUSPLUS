#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> V={2,4,6,8,10,10,2,20,30};
    V.insert(40);
    V.insert(60);
    set<int>::iterator itr;
    cout<<"Using Iterator"<<endl;
    for(itr=V.begin();itr!=V.end();itr++)
    {
        cout<<*itr<<endl;
    }
    cout<<"Using for each loop"<<endl;
    for(int x:V)
    {
        cout<<x<<endl;
    }
}



