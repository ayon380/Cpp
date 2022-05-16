// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution
{
public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {
        vector<int> v1;
        for(int i = 0; i < n; i++)
        { 
            v1.push_back(a[i]);
        }
        for(int i = 0; i < m; i++)
        {
            v1.push_back(b[i]);
        }
        sort(v1.begin(), v1.end());
        int c=0;
        for(int i = 0; i < v1.size(); i++)
        {
            if(v1[i] != v1[i+1])
            c++;
        }
        return c;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, m;
        cin >> n >> m;
        int a[n], b[m];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];
        Solution ob;
        cout << ob.doUnion(a, n, b, m) << endl;
    }

    return 0;
} // } Driver Code Ends