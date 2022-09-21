#include <iostream>

using namespace std;
struct node
{
    int val;
    node *next;
};
struct qu
{
    node *fr;
    node *re;
};
void enqueue(qu *q,int val)
{
    node *nw=new node();
    if(!nw)
        cout<<"FULL\n";
    else
    {
        nw->val=val;
        nw->next=0;
        if(!q->fr)
            q->fr=q->re=nw;
        else
        {
            q->re->next=nw;
            q->re=nw;
        }
    }
}
int dequeue(qu *q)
{
    int x=-1;
    if(!q->re)
        cout<<"EMPTY\n";
    else
    {
        node *t=q->fr;
        x=t->val;
        if(q->fr==q->re)
        {
            q->fr=q->re=0;
        }
        else
        {
            q->fr=t->next;
        }
        delete(t);
    }
    return x;
}

int main()
{
    cout << "Hello world!" << endl;
    qu q;
    q.fr=q.re=0;
    while(1)
    {
        cout<<"1 enqueue\n2 dequeue\nexit\n";
        int p;
        cin>>p;
        switch(p)
        {
        case 1:
            cout<<"Enter the val: ";
            int val;
            cin>>val;
            enqueue(&q,val);
            break;
        case 2:
            cout<<dequeue(&q)<<endl;
            break;
        default:
            p=-1;
            break;
        }
        if(p==-1)break;

    }
    return 0;
}
