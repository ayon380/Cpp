#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1={4,5,9,3,6};
    make_heap(v1.begin(),v1.end());
    cout<<v1.front()<<endl;
    return 0;
}