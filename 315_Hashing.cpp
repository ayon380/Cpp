// You are using GCC
#include<bits/stdc++.h>
using namespace std;
class haash{
    public:
    int n;
    list<int> *l;
    haash(int n)
    {
        this->n=n;
        l=new list<int>[n];
    }
    void insert(int data)
    {
        int i=data%n;
        l[i].push_back(data);
    }
    void display()
    {
        for(int i=0;i<n;i++)
        {
            cout<<"List number "<<i<<" :"<<"\t";
            for(auto j : l[i])
            {
                cout<<j;
            }
            cout<<endl;
        }
    }
};
int main()
{
    int b;
    cin>>b;
    int n;
    cin>>n;
    haash h(b);
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        h.insert(a);
    }
    cout<<"How many elements to insert into Hashtable";
    h.display();
}