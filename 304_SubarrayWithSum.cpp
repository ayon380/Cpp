#include <bits/stdc++.h>
using namespace std;
void subarray(vector<pair<int,int>> &out, int arr[],int n)
{
    unordered_map<int,vector<int>> m;
    int sum=0;
    // vector<pair<int,int>> out;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==2)
        {
            out.push_back(make_pair(0,i));
        }
        if(m.find(sum)!=m.end())
        {
            vector<int> vc=m[sum];
            for(auto it = vc.begin();it < vc.end();it++)
            {
                out.push_back(make_pair(*it+1,i-1));
            }
        }
        m[sum].push_back(i);
    }
}
void print(vector<pair<int, int>> out)
{
    for (auto it = out.begin(); it != out.end(); it++)
        cout << "Subarray found from Index " <<
            it->first << " to " << it->second << endl;
}
  
// Driver code
int main()
{
    int arr[] = {6, 3, -1, -3, 4, -2, 2, 4, 6, -12, -7};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    vector<pair<int,int>> out;
    subarray(out,arr,n);
  
    // if we didn’t find any subarray with 0 sum,
    // then subarray doesn’t exists
    if (out.size() == 0)
        cout << "No subarray exists";
    else
        print(out);
  
    return 0;
}