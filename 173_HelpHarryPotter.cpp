#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        vector<char> v1;
        for(int i=1; i<=str.size(); i++)
        {
            if(i%2!=0){
                v1.push_back(str[i-1]);
            }
        }
        for(int i=0; i<v1.size(); i++)
        {
            cout<<v1[i];
        }
        cout<<endl;
    }
    return 0;
}