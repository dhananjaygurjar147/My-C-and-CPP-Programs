#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int x;
    cout<<"enter no\n";
    cin>>x;
    int mi=x;
    int ma=x;
    int p=1;
    while(p==1)
    {
        cout<<"enter no\n";
    cin>>x;
    if(mi>x)
        mi=x;
    if(ma<x)
        ma=x;
    cout<<"choice\n";
    cin>>p;
    }
    cout<<ma<<" "<<mi;
    return 0;
}
