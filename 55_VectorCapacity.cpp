#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    for(auto i=1;i<6;i++)
    {
        v1.push_back(i);
    }
    for(auto i: v1)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    cout<<"Size : "<<v1.size()<<endl;
    cout<<"MaxSize : "<<v1.max_size()<<endl;
    cout<<"Capacity : "<<v1.capacity()<<endl;
    // v1.clear();
    if(v1.empty()==false)
    {
        cout<<"Vector not empty"<<endl;
    }
    else
    {
        cout<<"Vector empty "<<endl;
    }
    v1.resize(100);
     cout<<"Size : "<<v1.size()<<endl;
    cout<<"MaxSize : "<<v1.max_size()<<endl;
    cout<<"Capacity : "<<v1.capacity()<<endl;
    for(auto i=1;i<50;i++)
    {
        v1.push_back(i);
    }
    v1.shrink_to_fit();
    cout<<"Size : "<<v1.size()<<endl;
    cout<<"MaxSize : "<<v1.max_size()<<endl;
    cout<<"Capacity : "<<v1.capacity()<<endl;
    return 0;
}