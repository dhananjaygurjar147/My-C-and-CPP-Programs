#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int q;
	cin>>q;
	while(q--)
	{
	    int y,c=0,i=0;
	    cin>>y;
	    int s[10]={0};
	    while(y--)
	    {
	        string a;
	        cin>>a;
	        for(int i=0;i<10;i++)
	        {cout<<a[i]<<" ";
	          if(a[i]==1){s[i]+=1;}
	        }
	        cout<<endl;
	    }
	    for(int i=0;i<10;i++)
	    {cout<<s[i]<<" ";
	        if((s[i]%2)!=0)c++;
	    }
	    cout<<endl<<c<<endl;

	}
	return 0;
}
