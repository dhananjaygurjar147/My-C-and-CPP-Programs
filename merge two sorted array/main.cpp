#include <iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int i=0,j=0,k=0;
        if(m!=0&&n!=0)
        {
            vector<int> a;
            while(i<m)
            {
                a.push_back(nums1[i]);
                i++;
            }cout<<"before k<m+n";
            i=0;
            while(k<m+n)
            {
                if(i<m&&j<n)
                {
                    if(a[i]<=nums2[j])nums1[k++]=a[i++];
                    else nums1[k++]=nums2[j++];
                }
                else if(i<m){nums1[k++]=a[i++];}
                else if(j<n){nums1[k++]=nums2[j++];}
                cout<<k<<" ";
            }
        }
        else if(n!=0)
        {
            while(i<n)
            {
                nums1[i]=nums2[i];
                i++;
            }
        }

    }
};
int main()
{
    cout << "Hello world!" << endl;
    vector<int> nums1,nums2;
    int m=3,n=3;

    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(0);
    nums2.push_back(2);
    nums2.push_back(4);
    nums2.push_back(5);

    Solution a;
    a.merge(nums1,m,nums2,n);
    cout<<nums1[0]<<" "<<nums1[1]<<" "<<nums1[2]<<" "<<nums1[3]<<" "<<nums1[4]<<" "<<nums1[5];

    return 0;
}
