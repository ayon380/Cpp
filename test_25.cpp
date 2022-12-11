#include <iostream>
using namespace std;
int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int i = 0;
		int j = n - 1;
		int ans = 0;
		while (i<=j)
		{
			if (arr[i] ==arr[j])
			{
				i++;
				j--;
			}
			else if (arr[i] <arr[j])
			{
				arr[j] -=arr[i];
				i++;
				ans++;
			}
			else
			{
				arr[i]-=arr[j];
				j--;
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}