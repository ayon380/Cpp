#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a[]={"one","two","three","four","five","six","seven","eight","nine","Greater than 9"};
    if(n<10)
    {
        for(int i=0;i<10;i++)
        {
            if(n==(i+1))
            {
                cout<<a[i];
                break;
            }
        }
    }
    else
    {
        cout<<a[9];
    }
    return 0;
}