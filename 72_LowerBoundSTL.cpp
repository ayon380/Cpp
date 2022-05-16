#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, a, q;
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v1.push_back(a);
    }
    cout << "ddd";
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int w, j = 1, g;
        cin >> w;
        for (auto i : v1)
        {
            if (w == i)
            {
                cout << "Yes " << j << endl;
                break;
            }
            else
            {
                if (i > w)
                {
                    cout<<"No "<<j<<endl;
                    break;
                }
            }
            j++;
        }
    }
    return 0;
}
