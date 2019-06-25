#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>V;
    V.insert(pair<int,string>(1,"Anshu"));
    V.insert(pair<int,string>(2,"Vaibhav"));
    V.insert(pair<int,string>(3,"Anupam"));
    map<int,string>::iterator itr;
    for(itr=V.begin();itr!=V.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
     map<int,string>::iterator itr1;
     itr1=V.find(2);
     cout<<"Value found is:-"<<endl;
     cout<<itr1->first<<" "<<itr1->second<<endl;
}
