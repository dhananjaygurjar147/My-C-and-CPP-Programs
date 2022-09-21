#include <iostream>
#include<iomanip>
using namespace std;

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
        }
        switch(q)
        {
        case 1:
            cout<<"ADDITION of "<<x<<" + "<<y<<" = "<<x+y<<endl;
            break;
        case 2:
            cout<<"SUBTRACTION of "<<x<<" - "<<y<<" = "<<x-y<<endl;
            break;
        case 3:
            cout<<"DIVISION of "<<x<<" / "<<y<<" = "<<x/y<<endl;
            break;
        case 4:
            cout<<"MULTIPLICATION of "<<x<<" * "<<y<<" = "<<x*y<<endl;
            break;
        case 5:
            {cout<<"Enter the base number"<<endl;
            cin>>x;
            cout<<"Enter the power of "<<x<<endl;
            cin>>y;
            int total=1;
            for(int i=0; i<y; i++)
            {
                total*=x;
            }
            cout<<x<<" to the power "<<y<<" is "<<total<<endl;
            break;}
        case 6:
            break;
        default:
            cout<<"Invalid choice"<<endl;
        }
        cout<<endl;

    }
    while(q!=6);
    return 0;
}
