#include <bits/stdc++.h>
using namespace std;
int main()
{
    time_t start,end;
    time(&start);
    int c=0;
    for(int i=0;i<10000;i++)
    {
        c++;
    }
    time(&end);
    double elapsed = double(end - start);
    cout<<fixed<<elapsed<<setprecision(20)<<endl;
    return 0;
}