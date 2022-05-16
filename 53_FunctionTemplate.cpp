#include <iostream>
using namespace std;
template <class var=int>
float average(var a1,var a2)
{
    return((a1+a2)/2.0);
}
int main()
{
    cout<<average<float>(6.2,9.4);
    return 0;
}