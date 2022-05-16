#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    for(int i=1;i<7;i++)
    {
        v1.push_back(i);
    }
    for(auto i : v1)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    cout<<v1.at(2)<<endl;
    cout<<"\n";
    cout<<v1[4]<<endl;
    cout<<"\n";
    cout<<v1.front()<<endl;
    cout<<"\n";
    cout<<v1.back()<<endl;
    int* ptr=v1.data();
    cout<<*(ptr+3)<<endl;
    *(ptr+2)=40;
     for(auto i : v1)
    {
        cout<<i<<" ";
    }
    return 0;
}