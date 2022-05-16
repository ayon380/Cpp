#include <iostream>
using namespace std;
int main()
{
    int n,s=0;
    cout<<"Enter the range : ";
    cin>>n;
    for(int i=2;i<=n;i+=2)
    {
        s+=i;
    }
    cout<<s;
    return 0;
}