#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    int ps = 4;
    unordered_map<int, int> m;
    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int n = sizeof(pages) / sizeof(pages[0]);
    int pf = 0;
    for (int i = 0; i < n; i++)
    {
        if (m.size() < ps)
        {
            if (s.find(pages[i]) == s.end())
            {
                pf++;
                s.insert(pages[i]);
            }
            m[pages[i]] = i;
        }

        else
        {
            if (s.find(pages[i]) == s.end())
            {
                int mini, minv = INT_MAX;
                for (int j = 0; j < m.size(); j++)
                {
                    if (m[j] < minv)
                    {
                        minv = m[j];
                        mini = j;
                    }
                }
                s.erase(minv);
                s.insert(pages[i]);

                pf++;
            }
            m[pages[i]] = i;
        }
    }
    cout << pf;
    return 0;
}