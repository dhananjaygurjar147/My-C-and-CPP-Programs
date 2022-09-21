#include <iostream>

using namespace std;
struct node
{
    int val;
    node *lchild,*rchild;
};
void iinsert(node *t,int key)
{
    node *r;
    while(t)
    {
        r=t;
        if(t->val==key)
            return;
        else if(t->val>key)t=t->lchild;
        else t=t->rchild;
    }
    node *nw=new node;
    nw->val=key;
    nw->lchild=nw->rchild=0;
    if(r->val>key)r->lchild=nw;
    else r->rchild=nw;
}
void display(node *t)
{
    if(t)
    {
        display(t->lchild);
        cout<<t->val<<" ";
        display(t->rchild);
    }
}
void create()
{
    int x;
    node *root=new node;
    cout<<"Enter the root: ";
    cin>>root->val;
    root->lchild=root->rchild=0;
    int q=1;
    while(q)
    {
        cout<<"Enter the values: ";
        cin>>x;
        iinsert(root,x);
        cout<<"Choice: ";
        cin>>q;
    }
    display(root);
}

int main()
{
    cout << "Hello world!" << endl;
    create();
    return 0;
}
