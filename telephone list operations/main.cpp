#include <iostream>
#include<fstream>
#include<iomanip>
#include<string.h>
using namespace std;
class store
{
    char name[30];
    char no[30];
public:
    void check(char *s,int a=0)
    {
        if(strcmp(name,s)==0)
        {
            cout<<no;

        }

    }
    void num(char *s)
    {
        if(strcmp(no,s)==0)
            cout<<name;

    }
    int update(char *s)
    {
        if(strcmp(name,s)==0)
        {
            cout<<no;
            return 1;
        }
        return 0;
    }

};
int main()
{
    int q;
    store item[3];
    fstream file;
    char s[30];
    while(1)
    {
        cout<<"0 name\n1 number\n2 update\n3 exit\n";
        cin>>q;
        if(q==0)
        {
            cout<<"enter the name";
            cin>>s;
            file.open("list",ios::in|ios::out);
            for(int i=0; i<2; i++)
            {
                file.read((char *)&item[i],sizeof(item[i]));
                item[i].check(s);
            }
        }
        else if(q==1)
        {
            cout<<"enter the no";
            cin>>s;
            file.open("list",ios::in|ios::out);
            for(int i=0; i<2; i++)
            {
                file.read((char *)&item[i],sizeof(item[i]));
                item[i].num(s);
            }
        }
        else if(q==2)
        {
            cout<<"enter the name";
            cin>>s;
            file.open("list",ios::in|ios::out);
            for(int i=0; i<2; i++)
            {
                file.read((char *)&item[i],sizeof(item[i]));
                if(item[i].update(s))
                {
                    file.write((char *)&item[i],sizeof(item[i]));

                }
            }
        }
        else if(q==3)
            break;
        else cout<<"invalid number";
        cout<<endl;
    }
    file.close();

    cout << "Hello world!" << endl;
    return 0;
}
