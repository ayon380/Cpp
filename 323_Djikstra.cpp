// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int NO=-1;
vector<int> v1;
void parent(int cv,vector<int> parents)
{
    if(cv==NO)
    {
        return ;
    }
    parent(parents[cv],parents);
    // cout<<"<-"<<cv;
    v1.push_back(cv);
}
void printt(int sv,vector<int> dist, vector<int> p)
{
    int n=dist.size();
    cout<<"Enter no. of vertices:"<<endl;
    cout<<"Enter the adjacency matrix:"<<endl<<endl;
    cout<<"Enter the starting node:"<<endl;
    for(int i=0;i<n;i++)
    {
        if(i!=sv)
        {
            cout<<"Distance of node"<<i<<"="<<dist[i]<<endl;
            cout<<"Path=";parent(i,p);
            reverse(v1.begin(),v1.end());
            for(int i=0;i<v1.size();i++)
            {
                cout<<v1[i];
                if(i!=v1.size()-1)
                {
                    cout<<"<-";
                }
            }
            v1.clear();
            cout<<endl;
        }
    }
}
void djikstra(vector<vector<int>> m,int s)
{
    int n=m[0].size();
    vector<int> sdist(n);
    vector<bool> add(n);
    for(int i=0;i<n;i++)
    {
        sdist[i]=INT_MAX;
        add[i]=false;
    }
    sdist[s]=0;
    vector<int> p(n);
    p[s]=NO;
    for(int i=1;i<n;i++){
        int nv=-1;
        int sd=INT_MAX;
        for(int j=0;j<n;j++)
        {
            if(!add[j] && sdist[j] < sd)
            {
                nv=j;
                sd=sdist[j];
            }
        }
    
        add[nv]=true;
        for(int i=0;i<n;i++)
        {
           int ed=m[nv][i];
           if(ed>0 && ((sd+ed)<sdist[i]))
           {
               p[i]=nv;
               sdist[i]=sd+ed;
           }
        }
    }
    printt(s,sdist,p);
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int> (n,0));
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cin>>v[i][j];
        }
    }
    int x;
    cin>>x;
    djikstra(v,x);
}