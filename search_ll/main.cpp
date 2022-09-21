#include <iostream>

using namespace std;
class Node
{
    int data;
   Node *head;
    Node* next;
public:
    Node* ins(Node* previous)
    {
        Node* nw=new Node();

        cin>>nw->data;
        nw->next=0;
        if(previous==0){head=nw;}
        else {previous->next=nw;}
        return nw;
    }
    void display()
    {
        while(head)
        {
            cout<<head->data<<endl;
            head=head->next;
        }
    }

};
int main()
{
    cout << "Hello world!" << endl;
    Node a,*previous=0;
    int q=1;
    while(q)
    {
        previous=a.ins(previous);
        cout<<"enter the choice:";
        cin>>q;
    }
    a.display();
    return 0;
}
