#include <bits/stdc++.h>
using namespace std;
class PCB{
    public:
    int PID,BT;
};
int main()
{
    int n;
    cout<<"Enter the no of processes: ";
    cin>>n;
    vector<PCB> v;
    for(int i=0;i<n;i++){
        PCB p;
        cout<<"Enter the PID and BT of process "<<i+1<<": ";
        cin>>p.PID>>p.BT;
        v.push_back(p);
    }
    int wt=0,twt=0;
    sort(v.begin(),v.end(),[](PCB a,PCB b){return a.BT<b.BT;});
    for(auto p:v){
        cout<<"PID: "<<p.PID<<" BT: "<<p.BT<<endl;
        cout<<"Waiting Time = "<<wt<<endl;
        cout<<"Turn Around Time = "<<wt+p.BT<<endl;
        cout<<"Completion Time = "<<wt+p.BT<<endl<<endl;
        twt+=wt;
        wt+=p.BT;
    }
    cout<<"Average Waiting Time = "<<round(twt/n)<<endl;
    return 0;
}