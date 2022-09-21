#include <iostream>

using namespace std;
struct Node
{
    Node *lchild;
    Node *rchild;
    int val;
};
struct lnode
{
    Node *val;
    lnode *next;
};
struct Qu
{
    lnode *fr;
    lnode *re;
};
int isempty(Qu *q);
void display(Node *root,Qu *q);
void enqueue(Qu *q,Node *nw)
{

    if(isempty(q))
    {
//cout<<"INside ";
        lnode *n=new lnode();
        n->val=nw;
        n->next=0;
        q->re=n;
        q->fr=n;
    }
    else
    {
        lnode *n=new lnode();
        n->next=0;
        n->val=nw;
        q->re->next=n;
        q->re=n;
    }
}
int isempty(Qu *q)
{
    return q->re?0:1;
}
Node *dequeue(Qu *q)
{

    lnode *p=q->fr;
    Node *n=p->val;
    q->fr=p->next;
    if(!q->fr)
        q->re=0;
    delete(p);
 return n;
}
void create()
{
    Node *p,*t;
    int x;
    Qu q;
    q.fr=q.re=0;
    cout<<"Enter the root number: ";
    cin>>x;
    Node *root=new Node();
    root->lchild=root->rchild=0;
    root->val=x;

    enqueue(&q,root);

    while(!isempty(&q))
    {
        //cout<<"2\n";
        p=dequeue(&q);
        cout<<"Enter the lchild: ";
        cin>>x;
        if(x!=-1)
        {
            t=new Node();
            t->lchild=t->rchild=0;
            t->val=x;
            p->lchild=t;
            enqueue(&q,t);
        }
        cout<<"Enter the rchild: ";
        cin>>x;
        if(x!=-1)
        {
            t=new Node();
            t->lchild=t->rchild=0;
            t->val=x;
            p->rchild=t;
            enqueue(&q,t);
        }
         //cout<<"after queue";
        // cout<<isempty(&q);
    }
    display(root,&q);
    //cout<<"after display";
}
void display(Node *root,Qu *q)
{

    enqueue(q,root);

    while(!isempty(q))
    {
        Node *t=dequeue(q);
        if(t)
        {
            cout<<t->val<<" ";
            enqueue(q,t->lchild);
            enqueue(q,t->rchild);
        }
    }

}
int main()
{
    cout << "Hello world!" << endl;
    create();
    return 0;
}
