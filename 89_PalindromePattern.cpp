#include <iostream>
using namespace std;
int main()
{
    int num,j;
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        int k=i;
        for(j=1; j<= num-i; j++)
        {
            cout<<"  ";
        }
        for(; j<=num; j++)
        { 
            cout<<k<<" ";
            k--;
        }
        k=1;
        for(;j<(num+i);j++)
        {
            k++;
            cout<<k<<" ";
        }
        for(; j<(2*num-1); j++)
        {
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}