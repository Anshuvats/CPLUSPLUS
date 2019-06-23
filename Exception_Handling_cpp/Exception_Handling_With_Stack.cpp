#include<iostream>
using namespace std;
class StackOverFlow:exception{};
class StackUnderFlow:exception{};
class Stack{
private:
    int *stk;
    int top=-1;
    int size;
public:
     Stack(int s)
     {
         size=s;
         stk=new int[size];
     }
     void push(int x)
     {
         if(top==size-1)
            throw StackOverFlow();
         top++;
         stk[top]=x;
     }
     int pop()
     {
         if(top==-1)
            throw StackUnderFlow();
         return stk[top--];
     }
};
int main()
{
    Stack s(5);
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    s.push(10);
    s.push(12);
    s.push(14);
    s.push(16);

}
