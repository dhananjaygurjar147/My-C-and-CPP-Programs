#include <iostream>

using namespace std;

struct Node
{

    int val;
    Node *next;
};
Node * insert(Node *h,int k=-1)
{
    Node *p=h;
    //cout<<"inside insert";
    if(k==-1)
    {
        while(p&&p->next)
        {
            p=p->next;
        }
        Node *nw=new Node();
        cout<<"Enter the val: ";
        cin>>nw->val;
        nw->next=0;
        if(p)p->next=nw;
        else p=nw;
    }
    else if(k){
            int i=k;
        while(--i)
        {
            p=p->next;
        }
        Node *nw=new Node();
        cout<<"Enter the val: ";
        cin>>nw->val;
        nw->next=p->next;
        p->next=nw;
    }
    else {
        Node *nw=new Node();
        cout<<"Enter the val: ";
        cin>>nw->val;
        nw->next=p;
        p=nw;
    }
    if(!h||!k)h=p;
    return h;
}
void display(Node *h)
{
    while(h)
    {
        cout<<h->val<<" ";
        h=h->next;
    }
cout<<endl;
}
bool check(Node *h)
{
    Node *p=h;
    do
    {
        h=h->next;
        p=p->next;
        p=p!=0?p->next:0;

    }
    while(p&&h&&p!=h);
    if(p==h)return true;
    else return false;
}
int main()
{
    cout << "Hello world!" << endl;
    Node *head=0,*h2=0;
    int q=1;
    while(q){
    head=insert(head);
    cout<<"\nChoice :";
    cin>>q;
    }
    q=1;
    while(q){
    h2=insert(h2);
    cout<<"\nChoice :";
    cin>>q;
    }
    Node *h3=h2;
    while(h3->next)
    {
       h3=h3->next;
    }
    h3->next=h2;
cout<<check(head)<<" "<<check(h2);
    return 0;
}
