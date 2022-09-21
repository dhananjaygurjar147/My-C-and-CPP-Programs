#include <iostream>
#include<conio.h>
#include<string.h>
#include<ctype.h>

using namespace std;

int main()
{

    cout<<"hello world";
    int i=0;
     char *ptr[10] = {"books","television","computer","sports"};
    char str[25];

    cout<<"\nEnter the string: ";
    cin>>str;
    cout<<str<<endl;
    for(i=0; i<4; i++)
    {
        if(!strcmp(str, *ptr[i]))
        {
            cout<<"\n\nYour choice"<<endl;
            break;

        }
    }
    if(i==4)
        cout<<"\n\nYour choice is not here "<<endl;
    return 0;

}
