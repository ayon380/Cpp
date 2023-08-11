#include<bits/stdc++.h>
using namespace std;
class PCB{
	public:
		int PID;
		int bt;
};
int main()
{
	int n;
	cout<<"Enter the no of processes : ";
	cin>>n;
	queue<PCB> q;
	for(int i=0;i<n;i++)
	{
		PCB p;
		cout<<"Enter the details of the Process "<<i<<" :";
		cin>>p.PID>>p.bt;
		q.push(p);
	}
	int t=0;
	while(!q.empty())
	{
		PCB w=q.front();
		q.pop();
		cout<<w.PID<<" - wt -> "<<t<<" ct -> "<<t+w.bt<<endl;
		t+=w.bt;

	}
}