#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int zc=0,oc=0;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='0')
        {
            zc++;
        }        
        else
        {
            oc++;
        }
    }
    if(zc%2==0 and oc%2==0)
    {
        cout<<"Accepted";
    }
    else
    {
        cout<<"Rejected";
    }
    return 0;
}