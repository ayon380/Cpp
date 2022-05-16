#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string:";
    getline(cin, str);
    int max = 0;
    char r;
    int arr[256] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        arr[str[i]]++;
        if (max < arr[str[i]])
        {
            max = arr[str[i]];
            r = str[i];
        }
    }
    cout<<r;
    return 0;
}