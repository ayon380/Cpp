//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        // Code here 
        int ans=0;
        vector<int> p,t;
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='P')
            {
                p.push_back(i);
            }
            if(arr[i]=='T')
            {
                t.push_back(i);
            }
        }
        int l=0,r=0;
        while(l< t.size() and r<p.size())
        {
            if(abs(t[l]-p[r])<=k)
            {
                ans++;
                l++;
                r++;
            }
            else if(t[l]<p[r])
            {
                l++;
            }
            else
            {
                r++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n >> k;
		char arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		Solution obj;
		cout<<obj.catchThieves(arr, n, k) << endl;
	}
	return 0; 
} 


// } Driver Code Ends