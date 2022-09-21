#include <iostream>
#include<iomanip>
using namespace std;
void addition(float x,float y)
{
    cout<<"ADDITION of "<<x<<" + "<<y<<" = "<<x+y<<endl;
}
void subtraction(float x,float y)
{
    cout<<"SUBTRACTION of "<<x<<" - "<<y<<" = "<<x-y<<endl;
}
void division(float x,float y)
{
    cout<<"DIVISION of "<<x<<" / "<<y<<" = "<<x/y<<endl;
}
void multiplication(float x,float y)
{
    cout<<"MULTIPLICATION of "<<x<<" * "<<y<<" = "<<x*y<<endl;
}
void power(void)
{
    float x,y;
    cout<<"Enter the base number"<<endl;
    cin>>x;
    cout<<"Enter the power of "<<x<<endl;
    cin>>y;
    int total=1;
    for(int i=0; i<y; i++)
    {
        total*=x;
    }
    cout<<x<<" to the power "<<y<<" is "<<total<<endl;
}
int main()
{
    cout <<setw(20)<< "CALCULATOR" << endl;
    float x,y;
    int q;
    do
    {
        cout<<"Enter your choice: "<<endl<<" 1 ADDITION\n 2 SUBTRACTION\n"<<
            " 3 DIVISION\n 4 MULTIPLICATION\n 5 POWER OF NUMBER\n 6 EXIT\n";
        cin>>q;
        if(q<=4)
        {
            cout<<"Enter The Two Numbers: "<<endl;
            cin>>x>>y;
            if(q==1)
                addition(x,y);
            else if(q==2)
                subtraction(x,y);
            else if(q==3)
                division(x,y);
            else multiplication(x,y);
        }
        else if(q==5)
        {
            power();
        }
        else if(q==6)
        {
            q=6;
        }
        else
        {
            cout<<"Invalid choice"<<endl;
        }
        cout<<endl;

    }
    while(q!=6);
    return 0;
}
