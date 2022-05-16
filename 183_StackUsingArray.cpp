#include <bits/stdc++.h>
using namespace std;
int arr[100];
int top = -1;
void push()
{
    if (top == 99)
    {
        cout << "Stack overflow" << endl;
        return;
    }
    top++;
    cout << "Enter the value to be pushed : ";
    cin >> arr[top];
}
void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow" << endl;
        cout << endl;
    }
    cout << "Element Popped " << arr[top] << endl;
    top--;
}
void peek()
{
    cout << "The Top Element " << arr[top] << endl;
}
void display()
{
    for (int i = 0; i <= top; i++)
    {
        cout << arr[i] << " -> ";
    }
    cout << endl;
}
int main()
{
    while (1)
    {
        int n;
        cout << "Enter 1 to push, 2 to pop, 3 to peek, 4 to display ,5 to exit \n";
        cin >> n;
        if (n == 1)
        {
            push();
        }
        else if (n == 2)
        {
            pop();
        }
        else if (n == 3)
        {
            peek();
        }
        else if (n == 4)
        {
            display();
        }
        else
        {
            return 1;
        }
    }
    return 0;
}