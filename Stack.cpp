#include<iostream>
using namespace std;

class STACK
{
    int top,stack[20];
    public:
        STACK();
        void push(int value);
        void pop(int num);
        void show_stack();
};
STACK::STACK()
{
    top=-1;
    for(int i=0;i<20;i++)
    {
        stack[i]=0;
    }
}
void STACK::push(int value)
{
    if(top<20-1)
    {
        stack[++top]=value;
    }
    else
    {
        cout<<"Overflow";
    }
}
void STACK::pop(int num)
{
    for(int i=0;i<num;i++)
    {
       if(top>=0)
        {
            stack[top--];
        }
    else
        {
            cout<<"Underflow";
        }
    }
}
void STACK::show_stack()
{
    int i;
    cout<<"Contents of Stack : \n";
    for(i=0;i<=top;i++)
    {
        cout<<stack[i]<<" ";
    }
}
int main()
{
    STACK a;
    int n;
    cout<<"Input 20 Elements in Stack : \n";
    for(int i=0;i<20;i++)
    {

        a.push(i);
    }
    a.show_stack();
    cout<<"\nHow Many Elements You Want to Delete : ";
    cin>>n;
    a.pop(n);
    a.show_stack();
    return 0;
}
