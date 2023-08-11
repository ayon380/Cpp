#include <bits/stdc++.h>
using namespace std;

int main()
{
    // P0, P1, P2, P3, P4 are the Process names here

    int n, m, i, j, k;
    n = 5;                         // Number of processes
    m = 3;                         // Number of resources
    int alloc[5][3] = {{0, 1, 0},  // P0 // Allocation Matrix
                       {2, 0, 0},  // P1
                       {3, 0, 2},  // P2
                       {2, 1, 1},  // P3
                       {0, 0, 2}}; // P4

    int max[5][3] = {{7, 5, 3},  // P0 // MAX Matrix
                     {3, 2, 2},  // P1
                     {9, 0, 2},  // P2
                     {2, 2, 2},  // P3
                     {4, 3, 3}}; // P4

    int avail[3] = {3, 3, 2}; // A
    int need[5][3];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }
    cout<<"asdas";
    bool done[5] = {false};
    vector<int> ans;
    while (ans.size() != 5)
    {
        bool f = false;
        for (int j = 0; j < 5; j++)
        {
            f = false;
            if (!done[j])
            {
                for (int k = 0; k < 3; k++)
                {
                    if (need[j][k] > avail[k])
                    {
                        f = true;
                    }
                }
                if (!f)
                {
                    ans.push_back(j);
                    for (int r = 0; r < 3; r++)
                    {
                        avail[r] += alloc[j][r];
                    }
                    done[j] = true;
                }
            }
            // for (auto i : ans)
            // {
            //     std::cout << i << " ";
            // }
        }
    }
    for (auto i : ans)
    {
        std::cout << i << " ";
    }
}