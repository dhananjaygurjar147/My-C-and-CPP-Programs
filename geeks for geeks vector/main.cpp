#include <iostream>
#include<vector>
#define ll long long
using namespace std;
class Solution
{ public:
bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        int *a=new int[N];

        for(ll i=0;i<N;i++)
            a[i]=0;
       ll i=0;
        while(i<N)
        {

        a[A[i]]++;

        a[B[i]]--;
         i++;
        }
         i=0;
        while(i!=10)
        {
            if(a[i++]!=0)
            {
                return 0;
            }
        }
        return 1;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> arr(n,0),brr(n,0);
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        for(ll i=0;i<n;i++)
            cin>>brr[i];
        Solution ob;
        cout<<ob.check(arr,brr,n)<<endl;
    }
    return 0;
}

