#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>m>>n;// m for width , n for length
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((i+j+2)%4==0 || (i==1) && ((j+1)%4==0))
            { 
                cout<<" #";
            }
            else
            { 
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}