#include <iostream>
using namespace std;
int main()
{
    int num,q;
    cin>>num;
    q=num-1;
    for(int i=0; i<num; i++)
    {
        for(int j=q; j>0; j--)
        {
            cout<<"  ";
        }
        for(int j=0; j<num; j++)
        { 
            cout<<" #";
        }
        q--;
        cout<<endl;
    }
    return 0;
}