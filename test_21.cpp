#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> productOfArray(vector<int> v)
    {
        vector<int> v1;
        int p=1;
        for(auto i: v)
        {
            p*=i;
        }
        int a=p;
        for(auto i:v)
        {
            a=p;
            v1.push_back(a/i);
        }
        return v1;
    }
    void print(vector<int> v)
    {
        for(auto i: v)
        {
            cout<<i<<" ";
        }
    }
};
int main()
{
    vector<int> nums,nums1;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    Solution ans;
    nums1=ans.productOfArray(nums);
    ans.print(nums1);
    
    return 0;
}