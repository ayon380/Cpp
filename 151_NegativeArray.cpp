// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int arr1[n],j=0,arr2[n],k=0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]<0)
            {
                arr1[j]=arr[i];
                j++;
            }
            if(arr[i]>=0)
            {
                arr2[k]=arr[i];
                k++;
            }
        }
        for(int i=0; i < k;i++)
        {
            arr[i]=arr2[i];
        }
        int q=0;
        for(int i=n-j; i <n;i++)
        {
            arr[i]=arr1[q];
            q++;
        }
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends