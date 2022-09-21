#include <iostream>

using namespace std;

struct Node
{
    int pos;
    int val;
    Node *next;
};
Node * inser(int a,Node *p,int j)
{
   if(!p){
        //Node *head=p;
        Node *nw=new Node();
        nw->pos=j;
        nw->val=a;
        nw->next=0;
        return nw;

   }
   else {
        Node *h=p;
        while(p->next)
    {
        p=p->next;
    }
     Node *nw=new Node();
        nw->pos=j;
        nw->val=a;
        nw->next=0;
        p->next=nw;
        p=h;
   }
    return p;
}
void sparse(Node *a[])
{

cout<<"hlel";
//cout<<a[0];
for(int i=0;i<5;i++)
{

    Node *p=a[i];
    for(int j=0;j<5;j++)
    {
        if(p->pos==j)
        {
            cout<<p->val;
            p=p->next;

        }
        else cout<<"0";
        cout<<" ";
    }
    cout<<endl;

}

}

int main()
{
    int a[5][5];
    Node* b[5];
    //Node (b[5]);
    cout << "Hello world!" << endl;
    for(int i=0;i<=4;i++)
    {
        Node *p=0;

        for(int j=0;j<5;j++)
        {
            printf("a[%d][%d]: ",i,j);
            cin>>a[i][j];
            if(a[i][j])
            {
                b[i]=inser(a[i][j],p,j);
                p=b[i];
            }
           // cout<<"          ";
        }
        cout<<endl;
    }
    //int c=3;
    sparse(&b[0]);


    return 0;
}
