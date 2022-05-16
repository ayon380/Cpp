#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
} // Call by value
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
} // Call by reference by pointers
void swapReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}//Call by reference Variable
int main()
{
    int a = 4, b = 5;
    // swapPointer(&a,&b);
    swapReference(a, b);
    cout << a << endl
         << b << endl;
    return 0;
}