#include <iostream>
using namespace std;
float celsius(float a)
{
    return (a - 32) * (5.0 / 9.0);
}
int main()
{
    float a, b, c;
    cout << "Enter the start : ";
    cin >> a;
    cout << "Enter the end : ";
    cin >> b;
    cout << "Enter the increment : ";
    cin >> c;
    for (float i = a; i < b; i += c)
    {
        cout << i << "  :  " << celsius(i)<<" \n" ;
    }
    return 0;
}