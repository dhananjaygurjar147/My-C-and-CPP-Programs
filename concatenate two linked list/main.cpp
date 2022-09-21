#include <iostream>
#include<bits/stdc++.h>
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
Node * mg(Node *h1,Node *h2)
{
    Node *h,*nw=new Node();
    if(h1->val<=h2->val){nw->val=h1->val;h1=h1->next;}
    else {nw->val=h2->val;h2=h2->next;}
    h=nw;
    nw->next=0;
    while(h1&&h2)
    {
        Node *nw1=new Node();
    if(h1->val<=h2->val){nw1->val=h1->val;h1=h1->next;}
    else {nw1->val=h2->val;h2=h2->next;}
     nw->next=nw1;
     nw=nw1;
     nw->next=0;
    }
    if(h1){nw->next=h1;}
    if(h2){nw->next=h2;}
    return h;
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
    //head=insert(head,0);
    display(head);
    display(h2);
    Node *h3=mg(head,h2);
    display(h3);
   //cout<<head->val<<" "<<head->next->val<<" "<<head->next->next->val<<endl;
    return 0;
}
