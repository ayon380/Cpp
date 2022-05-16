#include <bits/stdc++.h>
using namespace std;
void increase(int **a)
{
    int *q = *a;
    // q+=10;
    *a+10;
}
int main()
{
    int c=90;
    int *b=&c;
    increase(&b);
    cout<<*b<<endl;
    return 0;
}