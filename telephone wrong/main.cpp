#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int q;
	cin>>q;
	while(q--)
	{
	   string s;
	   int c=0,n,a=0;
	   cin>>n;
	   cin>>s;
	   for(int i=1;i<n;i++)
	   {
	       if(s[i]!=s[i-1])
	       {
	           if(a==1)c++;
	           else {c+=2;a=1;}
	       }
	       else a=0;

	   }
	   cout<<c<<endl;
	}
	return 0;
}
