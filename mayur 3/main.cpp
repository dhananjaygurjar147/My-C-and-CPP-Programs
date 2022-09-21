#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
Node()
{

}
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *getlist(Node*head)
{Node *temp,*t;
    temp=head->next;t=head;
    while(temp->data!=-1)
    {
        if(temp->data<t->data)
        {
            temp=temp->next;
            t->next=temp;

        }
        else
        {
            t=temp;
            temp=temp->next;
        }
    }
    return head;


}
int main()
{
    Node *head;int x;Node t1,t2,t3,t4;
    cout << "Hello world!" << endl;
    cin>>x;

   t1.data=x;
    t1.next=0;
    head=&t1;
    cin>>x;
    t2.data=x;
    t2.next=0;
    t1.next=&t2;
    cin>>x;
    t3.data=x;
    t3.next=0;
    t2.next=&t3;
     cin>>x;
    t4.data=x;
    t4.next=0;
    t3.next=&t4;


    head=getlist(head);
    while(head->data!=-1)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"-1";
    return 0;
}
