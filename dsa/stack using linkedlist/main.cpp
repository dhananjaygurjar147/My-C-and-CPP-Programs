#include <iostream>

using namespace std;
struct Node
{
    int val;
    struct Node *next;
};
struct stac
{
    Node *top;
};
void push(stac *st);
int pop(stac *st);
int peek(stac *st);
bool isempty(stac *st);
bool isfull(stac *st);

int main()
{
    cout << "Hello world!" << endl;
    stac s;
    s.top=0;
    while(1)
    {
        cout<<"1 push\n2 pop\n3 peek\n4 isempty\n5 isfull\nexit\n";
        int q;
        cin>>q;
        switch(q)
        {
        case 1:
            push(&s);
            break;
        case 2:
            cout<<pop(&s);
            break;
        case 3:
            cout<<peek(&s);
            break;
        case 4:
            cout<<isempty(&s);
            break;
        case 5:
            cout<<isfull(&s);
            break;
        default:
            q=0;
            break;
        }
        if(!q)break;
        cout<<endl;
    }
    return 0;
}

void push(stac *st)
{
    Node *nw=new Node();
    if(!nw)
        cout<<"Stack overflow\n";
    else
    {
        nw->next=st->top;
        cout<<"Enter the number: ";
        cin>>nw->val;
        st->top=nw;
    }
}
int pop(stac *st)
{
    int x=-1;
    if(!st->top)
    {
        cout<<"Stack empty\n";
    }
    else
    {
        x=st->top->val;
        st->top=st->top->next;
    }
    return x;

}
bool isempty(stac *st)
{
    return st->top?0:1;
}
bool isfull(stac *st)
{
    Node *nw=new Node();
    return nw?0:1;
}
int peek(stac *st)
{
    Node *h=st->top;
    cout<<"Enter the position: ";
    int i;
    cin>>i;
    i--;
    while(--i)
    {
        if(h)h=h->next;
        else{break;}
    }
    if(!h){cout<<"No Such position\n";return -1;}
    return h->val;
}
