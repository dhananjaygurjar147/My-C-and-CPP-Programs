#include <iostream>

using namespace std;
int comb(int n,int r)
{
    if(n<=1||r==0||r==n)return 1;
   // if(r==1)return n;
    return comb(n-1,r)+comb(n-1,r-1);
}
int main()
{
    cout << "Hello world!" << endl;
    cout<<comb(6,3);
    return 0;
}
