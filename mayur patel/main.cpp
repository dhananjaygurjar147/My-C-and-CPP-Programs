#include <iostream>
#include<string>
using namespace std;
string cnvert(string *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]<='Z'&&str[i]<='A')
        {
            if(i==0)
            {
                str[i]-=32;
            }
            else if(str[i-1]==' ')
            {
                str[i]-=32;
            }
        }
        i++;
    }
}
int main()
{
    string str;
    getline(cin,str);
    cout<<cnvert(str)<<endl;
    return 0;
}
