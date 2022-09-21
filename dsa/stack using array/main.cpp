#include <iostream>

using namespace std;

struct stack1
{
    int top;
    int size;
    int *a;

};

void push(stack1 *st,int val);
int pop(stack1 *st);
bool isempty(stack1 *st);
bool isfull(stack1 *st);
int peek(stack1 *st,int i);

int main()
{
    cout << "Hello world!" << endl;
    stack1 s;
    cout<<"Enter the size: ";
    cin>>s.size;
    s.a=new int[s.size];
    s.top=-1;
    while(1)
    {
        cout<<"push\npop\nisempty\nisfull\npeek\nexit\n";
        int q;
        cin>>q;
        switch(q)
        {
        case 0:
            q=-1;
            break;
        case 1:
            cout<<"Enter the number: ";
            cin>>q;
            push(&s,q);
            break;
        case 2:
            cout<<pop(&s);
            break;
        case 3:
            cout<<isempty(&s);
            break;
        case 4:
            cout<<isfull(&s);
            break;
        case 5:
            cout<<"Enter the position: ";
            cin>>q;
            cout<<peek(&s,q);
            break;
        default:
            q=-1;
            break;
        }
        cout<<endl;
        if(q==-1)
            break;
    }

    return 0;
}
void push(stack1 *st,int val)
{
   if(st->top==st->size-1)
   cout<<"Stack overflow\n";
   else {st->top++;st->a[st->top]=val;}
}
int pop(stack1 *st)
{
    int x=-1;
    if(st->top==-1)
        cout<<"Stack empty\n";
    else
    {
        x=st->a[st->top];
        st->top--;
    }
    return x;
}
bool isempty(stack1 *st)
{
    return (st->top==-1)?true:false;
}
bool isfull(stack1 *st)
{
    return (st->top==st->size-1)?true:false;
}
int peek(stack1 *st,int i)
{
    return st->a[st->top-i+1];
}
