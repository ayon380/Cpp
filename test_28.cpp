#include <bits/stdc++.h>
using namespace std;
class PCB
{
public:
    int PID, pr, at;
    int bt;
};
int main()
{
    int n;
    cout << "Enter the no of processes : ";
    cin >> n;
    srand(time(NULL));
    vector<PCB> q;
    for (int i = 0; i < n; i++)
    {
        PCB p;
        cout << "Enter the details of the Process " << i << " :";
        cin >> p.PID >> p.bt >> p.at;
        p.pr = rand() % 10 + 1;
        q.push_back(p);
    }
    int t = 0;
    sort(q.begin(), q.end(), [](PCB a, PCB b)
         { return a.pr > b.pr; });
    while (!q.empty())
    {
        PCB w = q.back();
        q.pop_back();
        if (w.at <= t)
        {
            cout << w.PID << " - wt -> " << t << " ct -> " << t + w.bt << endl;
            t += w.bt;
        }
        else
        {
            q.push_back(w);
        }
    }
}