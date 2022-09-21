#include <iostream>
#include<vector>
#include<string>
using namespace std;
string convert(string s, int numRows) {
       if(numRows<=1)return s;
        int l,q=1;
        l=s.length();
        if(l<=numRows)return s;
        vector<string> v;
        for(int i=0;i<numRows;i++)
        {
            string a;
            v.push_back(a);
        }
        for(int j=0,i=0;s[i];i++)
        {
            v[j].push_back(s[i]);
            if(q)j++;
            else j--;
            if(j+1==numRows)q=0;
            if(j==0)q=1;
        }
        string b;
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;v[i][j];j++)
            {
                b.push_back(v[i][j]);
            }
        }
        /*for(int k=0;k<numRows;k++)
        {
            for(int j=0;j<=c;j++)
            {
                if(k!=0&&j!=0&&k!=numRows-1)v.push_back(s[e*j-k]);
                if(j!=c||k<r&&j<=r)v.push_back(s[e*j+k]);
            }
            if(numRows<=(e-k)&&(e-k)<r)v.push_back(s[l-k+1]);
        }*/
        return b;
    }
int main()
{
    cout << "Hello world!" << endl;
    string s="PAYPALISHIRING";
    int n=3;
    cout<<convert(s,n)<<endl<<"PAHNAPLSIIGYIR";
    return 0;
}
