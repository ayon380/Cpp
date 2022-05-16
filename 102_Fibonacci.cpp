#include <iostream>
using namespace std;
int main()
{
    int num ;
    cout<<"Enter the no of terms : ";
    cin >> num;
    if(num>=1)
    {
        cout<<" 0";
    }
    int a =0,b=1,c;
    for(int i=0;i<num-1;i++)
    {
        c=a+b;
        cout<<" "<<c;
        b=a;
        a=c;
    }
    return 0;
}