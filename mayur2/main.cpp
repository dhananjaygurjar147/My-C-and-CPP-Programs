#include <iostream>
#include<string>
using namespace std;

string con(string m)
{string t;
    int i=0,j=0,c=0;

    while(m[i]!='\0')
    {
        //cout<<i<<endl;
        if(c==0)
        {
            t[j++]=m[i];

            c++;
        }
        else if(m[i]==m[i-1])
        {
            c++;
        }
        else
        {
            t[j++]=c+48;

            c=0;
            i--;
        }
        i++;
    }
    //cout<<j;
    t[j++]=c+48;
    t[j]=0;
    i=0;
while(t[i]!=0)
{cout<<t[i];
    m[i]=t[i];
    i++;
}
m[i]=0;
    return m;
}

int main()
{
   string str,t;
    int i=0;
    getline(cin,str);
    cout<<str<<endl;
    //cout<<con(str)<<endl;
    t=con(str);
    while(t[i]!=0)
    {
        cout<<t[i];
        i++;
    }
    return 0;
}
