#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int q;
	cin>>q;
	while(q--)
	{
	    int n,u,d,p,c=1,i=1,s=1;
	    cin>>n>>u>>d;
	    cin>>p;
	   // n--;
	    while(n--)
	    {cout<<n<<" ";
	        int x;
	        cin>>x;
	        if(0<=(x-p)&&(x-p)<=u);
	        else if(0<=(p-x)&&(p-x)<=d);
	        else if((p-x)>d&&c==1){c=0;}
	       else s=0;
	        p=x;
	       if(s)i++;
	    }
	    cout<<i<<endl;
	}
	return 0;
}
