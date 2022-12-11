//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    static bool compare(Item a,Item b)
    {
        if((double)a.value/a.weight > (double)b.value/b.weight)
        {
            return true;
        }
        return false;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,compare);
        // reverse(arr,arr+n);
        // cout<<arr[0].value;
        double s=0.0;
        int we=0;
        for(int i=0;i<n;i++)
        {
            if(we<=W)
            {
                if(W-we < arr[i].weight)
                {
                    double q=(W-we)*arr[i].value;
                    q/=arr[i].weight;
                    s+=q;
                    break;
                }
                else
                {
                    s+=arr[i].value;
                    we+=arr[i].weight;
                }
            }
        }
        return s;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends