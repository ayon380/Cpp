#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set <int> s;
    queue <int> q;
    int ps=4;
    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int n = sizeof(pages)/sizeof(pages[0]);
    int pf=0;
    for(int i=0;i<n;i++)
    {
        if(q.size()<ps)
        {
            pf++;
            s.insert(pages[i]);
            q.push(pages[i]);
        }
        else{
            if(s.find(pages[i])==s.end())
            {
                int a=q.front();
                q.pop();
                q.push(pages[i]);
                s.erase(a);
                s.insert(pages[i]);
                pf++;
            }
        }
    }
    cout<<pf;
    return 0;
}