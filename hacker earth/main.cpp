#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout<<v[0]<<v[2]<<endl;
    v.erase(v.begin());
    cout<<v[0];
return 0;
}
