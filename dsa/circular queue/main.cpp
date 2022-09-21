#include <iostream>

using namespace std;
struct Qu
{
    int fr;
    int re;
    int si;
    int *a;
};
void enqueue(Qu *q,int val)
{
    if((q->re+1)%q->si==q->fr)
        cout<<"FULL\n";
    else
    {
        q->re=(q->re+1)%q->si;
        q->a[q->re]=val;
    }
}
int dequeue(Qu *q)
{
    int x=-1;
    if(q->re==q->fr)
        cout<<"EMPTY\n";
    else
    {
        q->fr=(q->fr+1)%q->si;
        x=q->a[q->fr];
    }
    return x;
}
int main()
{
    cout << "Hello world!" << endl;
    Qu q;
    cout<<"Enter the size: ";
    cin>>q.si;
    q.si++;
    q.a=new int[q.si];
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
