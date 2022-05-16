#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int i=0;
    int arr[n][2];
    while(i<n) 
    {
        cin>>arr[i][0];
        cin>>arr[i][1];
        i++;
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i][0]<<arr[i][1];
        if(arr[i][0]<0)
        {
            c++;
        }
    }
   
    cout<<c;
    return 0;
}