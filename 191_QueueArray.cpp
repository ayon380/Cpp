#include <bits/stdc++.h>
#define n 100
using namespace std;
int arr[n];
int front=-1, back=-1;
void enqueue()
{
    if(back>n-1)
    {
        cout<<"Queue Overflow"<<endl;
        return;
    }
    back++;
    cout<<"Enter the number to be inserted  : ";
    cin>>arr[back];
    cout<<endl;
}
void dequeue()
{
    if(front>back)
    {
        cout<<"Queue Underflow"<<endl;
        return;
    }
    front++;
    cout<<"The number dequeue is : "<<arr[front]<<endl;
}
void display()
{
    for(int i=front+1; i<=back; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void peek()
{
    cout<<"The Top Number  : "<<arr[front+1]<<endl;
}
int main()
{
    cout<<"*********QUEUE OPERATIONS************"<<endl;
    while(1)
    {
        int q;
        cout<<"Enter 1 to enqueue,\n 2 to dequeue,\n 3 to peek,\n 4 to display,\n 5 to exit"<<endl;
        cin>>q;
        if(q==1)
        {
            enqueue();
        }
        else if(q==2)
        {
            dequeue();
        }
        else if(q==3)
        {
            peek();
        }
        else if(q==4)
        {
            display();
        }
        else if(q==5) 
        {
            return 1;
        }
        else
        {
            cout <<"Wrong Input !!!!!!!!!!!!!"<<endl;
            continue;
        }
    }
    return 0;
}