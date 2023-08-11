#include <bits/stdc++.h>
using namespace std;
class PCB
{
public:
    int PID, BT;
};
void gaantChart(queue<PCB> q)
{
    while (!q.empty())
    {
        PCB p = q.front();
        q.pop();
        cout << "P" << p.PID << "(" << p.BT << ")";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the no of processes: ";
    cin >> n;
    int q;
    cout << "Enter the time quantum:";
    cin >> q;
    queue<PCB> q1;
    vector<PCB> v;
    for (int i = 0; i < n; i++)
    {
        PCB p;
        cout << "Enter the PID and BT of process " << i + 1 << ": ";
        cin >> p.PID >> p.BT;
        v.push_back(p);
        q1.push(p);
    }

    int wt = 0, twt = 0,t=0;
    while (true)
    {
        if (q1.empty())
        {
            break;
        }
        PCB p = q1.front();
        q1.pop();
        if (p.BT > q)
        {
            p.BT -= q;
            wt += q;
            q1.push(p);
        }
        else
        {
            int bt;
            for (auto w : v)
            {
                if (w.PID == p.PID)
                {
                    bt = w.BT;
                }
            }
            wt += p.BT;
            if(bt<0)
            {
                bt=0;
            }
            p.BT = 0;
            cout << "PID: " << p.PID << " BT: " << p.BT << endl;
            cout << "Waiting Time = " << wt - bt << endl;
            cout << "Turn Around Time = " << wt << endl;
            cout << "Completion Time = " << wt << endl << endl;
            // twt += wt - p.BT;
        }
        gaantChart(q1);

    }
    cout << "Average Waiting Time = " << round(wt / n) << endl;
    return 0;
}