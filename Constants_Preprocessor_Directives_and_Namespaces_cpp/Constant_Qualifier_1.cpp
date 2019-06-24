#include<iostream>
using namespace std;
int main()
{
    int x=10;
    const int *ptr=&x;
    //int const *ptr=&x;
    cout<<*ptr<<" "<<x<<endl;
    return 0;
}
