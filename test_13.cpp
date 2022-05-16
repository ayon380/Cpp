#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>x1>>x2>>y1>>y2;
    cin>>x3>>x4>>y3>>y4;
    if((y2-y1)/(x2-x1) and (x4-x3)==(y4-y3))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}
