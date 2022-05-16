#include <iostream>
using namespace std;
int main()
{
    int a =3;
    int* b =&a;
    cout<<"The address of a  : "<<&a<<endl;
    cout<<"The address of a : "<<b;
    int** c=&b;
    cout<<"\nThe value of b is : "<<&b<<endl;
    cout<<"the value of is : "<<*c<<endl;
    cout<<"The value is : "<<**c<<endl;
    cout<<"The value is : "<<&c<<endl;
    cout<<"The value is : "<<c<<endl;
    return 0;
}