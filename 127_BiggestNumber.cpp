#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    sort(str.begin(),str.end(),greater<int>());
    cout<<str;
    return 0;
}