#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    char ptr[10][100],a[100];
    int code[10],q,i;
    float cost[10];
    cout<<"Enter the number: ";
    cin>>q;
    for(i=0; i<q; i++)
    {
        cout<<"Name: ";
        cin>>a;
        cout<<a<<endl;
        int j=0;
        while(a[j]!='\0')
        {
            ptr[i][j]= a[j];
            j++;
        }
        cout<<"Code: ";
        cin>>code[i];
        cout<<"Cost: ";
        cin>>cost[i];
    }
    cout<<setw(20)<<setiosflags(ios::right)<<"Name"<<setw(10)
        <<setiosflags(ios::right)<<"Code"<<setw(10)<<setiosflags(ios::right)
        <<"Cost"<<endl;
    for(i=0; i<q; i++)
    {
        cout<<setw(20)<<setiosflags(ios::left)<<ptr[i];
        cout<<setw(10)
            <<setiosflags(ios::right)<<code[i]<<setw(10)<<setiosflags(ios::right)
            <<cost[i]<<endl;
    }

    cout << "Hello world!" << endl;
    return 0;
}
