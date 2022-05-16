#include <iostream>
using namespace std;
int sum(int n)
{
    int s=0;
    for(int i = 0; i <=n; i++)
    {
        s+=i;
    }
    return s;
}
int main()
{
    int num;
    cout<<"Enter the no of terms : ";
    cin >> num;
    cout<<"Sum : "<<sum(num)<<endl;
    return 0;
}