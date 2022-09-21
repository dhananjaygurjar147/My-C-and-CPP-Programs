#include <iostream>

using namespace std;
struct qu
{
    int fr;
    int re;
    int si;
    int *a;
};
void enqueue(qu *q,int val)
{
    if(q->re==q->si-1)
        cout<<"Queue is full\n";
    else
    {
        q->re++;
        q->a[q->re]=val;
    }
}
int dequeue(qu *q)
{
    int x=-1;
    if(q->fr==q->re)
        cout<<"Queue is empty\n";
    else
    {
        q->fr++;
        x=q->a[q->fr];
    }
    return x;
}
int main()
{
    cout << "Hello world!" << endl;
    qu s;
    cout<<"Enter the size:";
    cin>>s.si;
    s.a=new int[s.si];
    s.fr=s.re=-1;
    while(1)
    {
        cout<<"1 enqueue\n2 dequeue\n exit\n";
        int q;
        cin>>q;
        switch(q)
        {
            case 1: cout<<"Enter the val: ";
            int val;
            cin>>val;
            enqueue(&s,val);
            break;
            case 2: cout<<dequeue(&s)<<endl;
            break;
            default: q=-1;break;
        }
        if(q==-1)break;
    }
    return 0;
}
