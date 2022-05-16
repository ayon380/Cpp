#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str, str1;
        cin >> str;
        cin >> str1;
        int c = 0;
        for (int i = 0; i < str.length(); i++)
        {
            for (int j = 0; j < str1.length(); j++)
            {
                if(str[i]==str1[j]) 
                {
                    c++;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}