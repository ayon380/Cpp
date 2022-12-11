#include <bits/stdc++.h>
using namespace std;
map<char, int> mtr;
void preprocess(string pat)
{
    int m=pat.length();
    for(int i=0;i<m;i++)
    {
        mtr[pat[i]]=max(1, m-i-1);
    }
}
void search(string txt,string pat)
{
    int n=txt.length();
    int m=pat.length();
    preprocess(pat);
    int j=m-1;
    for(int i=0;i<n;i++)
    {
        if(txt[i]==pat[j])
        {
            cout<<"Found at index "<<i<<endl;
        }
        else
        {
            if(mtr.find(txt[i])!=mtr.end())
            {
                i+=mtr[txt[i]];
            }
            else
            {
                i+=m-1;
            }
        }
    }
}
int main()
{
    string str,pat;
    cin>>str>>pat;
    search(str,pat);
    return 0;
}