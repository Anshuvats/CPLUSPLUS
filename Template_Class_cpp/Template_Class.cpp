#include<iostream>
using namespace std;
template<class T>
class Stack{
private:
    T *stk;
    int top=-1;
    int size;
public:
    Stack(int s)
    {
        size=s;
        stk=new T[size];
    }
    void push(T x);
    T pop();
};
template<class T>
void Stack<T>::push(T x)
{
    if(top==size-1)
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        top++;
        stk[top]=x;
    }
}
template<class T>
T Stack<T>::pop()
{
    T x=0;
    if(top==-1)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        x=stk[top];
        top--;
    }
    return x;
}
int main()
{
    Stack<int> s(10);
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(10);
    s.push(12);
    s.push(14);
    s.push(16);
    s.push(18);
    s.push(20);
    s.push(22);
    s.push(24);
}

