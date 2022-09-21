#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
   vector<int> v;
   v.push_back(1);
   int n;
   cin>>n;
   for(int i=1;i<=n;i++)
   {int r=0;
       for(int j=v.size()-1;j>=0;j--)
       {
           int t=(v[j]*i)+r;
           v[j]=t%10;
           r=t/10;
       }
       while(r)
       {
           int a=r%10;
        v.insert(v.begin(),a);
        r/=10;
       }

   }
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i];
   }
    return 0;
}
