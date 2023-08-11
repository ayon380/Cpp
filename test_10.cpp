#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v1, v2;
	int n = 5;
	for (int i = 0; i < 2 * n; i++)
	{
		int x;
		cout<<"Enter ";
		cin >> x;
		if (i < n)
		{
			// cout<<"1";
			v1.push_back(x);
		}
		else
		{
			// cout<<"2";
			v2.push_back(x);
		}
	}
	vector<int> v3(v1.size()+v2.size());
	merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
	for(auto i : v3)
	{
		cout<<i<<" ";
	}
	return 0;
}