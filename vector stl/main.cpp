#include <bits/stdc++.h>

using namespace std;
vector<int> v()
{
    vector<int> a;a.push_back('a');
    return a;
}
int main()
{
    vector<int> a;
    a=v();
    int b[5]={1,2,3,4,5};
    cout <<a[0]<< "Hello world!" << endl;
    for(int x:b)cout<<x<<" ";
    return 0;
}
