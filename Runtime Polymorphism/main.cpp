#include <iostream>
#include<cstring>
using namespace std;
class media
{
protected:
    char title[50];
    float price;
public:
    media(char *s,float a)
    {
        strcpy(title,s);
        price=a;
    }
    virtual void display(){}

};

class book:public media
{
    int pages;
public:
    book(char *s,float a,int p):media(s,a)
    {
        pages=p;
    }
    void display();
};

class tape:public media
{
    float time;
public:
    tape(char *s,float a,float t):media(s,a)
    {
        time=t;
    }
    void display();
};

void book::display()
{
    cout<<"\nTilte: "<<title;
    cout<<"\nPages: "<<pages;
    cout<<"\nPrice: "<<price;
}
void tape::display()
{
    cout<<"\nTilte: "<<title;
    cout<<"\nTime: "<<time;
    cout<<"\nPrice: "<<price;
}
int main()
{
    char *title=new char[30];
    float price,time;
    int pages;

    cout<<"Enter the book details: "<<"Title: ";
    cin>>title;
    cout<<"Price: ";
    cin>>price;
    cout<<"Pages: ";
    cin>>pages;

    book book1(title,price,pages);
    cout<<"Enter the tape details: "<<endl<<"Title: ";
    cin>>title;
    cout<<"Price: ";
    cin>>price;
    cout<<"Time: ";
    cin>>time;
    tape tape1(title,price,time);

    media *list[2];
    list[0]=&book1;
    list[1]=&tape1;

    cout<<"\n...........Books.......\n";
    list[0]->display();
    cout<<"\n...........Tapes.......\n";
    list[1]->display();

    cout << "Hello world!" << endl;
    return 0;
}
