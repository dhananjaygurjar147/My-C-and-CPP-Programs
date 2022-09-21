#include <iostream>

using namespace std;
class item
{
    int code;
    float price;
public:
    void getdata(int a,float b)
    {
        code=a;
        price = b;
    }
    void show(void)
    {
        cout<<"Code: "<<code<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

int main()
{
    item *p=new item[2];
    item *d=p;
    int x,i;
    float y;
    for(i=0;i<2;i++)
    {
        cout<<"Input code and price for item:"<<i+1;
        cin>>x>>y;
        p->getdata(x,y);
        p++;
    }
    for(i=0;i<2;i++)
    {
        cout<<"Item:"<<i+1<<endl;
        d->show();
        d++;
    }
    cout << "Hello world!" << endl;
    return 0;
}
