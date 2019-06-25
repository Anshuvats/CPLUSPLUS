#include<iostream>
#include<fstream>
using namespace std;
class Items
{
private:
    string name;
    float price;
    int qty;
public:
    Items()
    {

    }
    Items(string n,float p,int q);
    friend ofstream & operator<<(ofstream &ofs,Items &i);
    friend ifstream & operator>>(ifstream &ifs,Items &i);
    friend ostream & operator<<(ostream &os,Items &i);
};

int main()
{
    int n;
    string name;
    float price;
    int qty;
    cout<<"Enter number of Items: ";
    cin>>n;
    Items *list[n];
    cout<<"Enter all Items "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" Items Name, price and quantity";
        cin>>name;
        cin>>price;
        cin>>qty;
        list[i]=new Items(name,price,qty);
    }
    ofstream ofs("Items.txt");
    for(int i=0;i<n;i++)
    {
        ofs<<*list[i];
    }
    Items item;
    ifstream ifs("Items.txt");
    for(int i=0;i<3;i++)
    {
        ifs>>item;
        cout<<"Item "<<i<<item<<endl;
    }
}
Items::Items(string n,float p,int q)
{
    name=n;
    price=p;
    qty=q;
}
ofstream & operator<<(ofstream &ofs,Items &i)
{
    ofs<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
    return ofs;
}
ifstream & operator>>(ifstream &ifs,Items &i)
{
    ifs>>i.name>>i.price>>i.qty;
    return ifs;
}
ostream & operator<<(ostream &os,Items &i)
{
    os<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
    return os;
}
