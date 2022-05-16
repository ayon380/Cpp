#include <iostream>
using namespace std;
int main()
{
    int *p;
    int n, s = 0;
    cout << "Enter no of elements : ";
    cin >> n;
    p = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value for index [" << i << "] : ";
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << endl;
    }
    for (int i = 0; i < n; i++)
    {
        s += p[i];
    }
    cout << "The sum is : " << s << endl;
    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;
    cout << *(p + 3) << endl;
    cout << *(p + 4) << endl;

    return 0;
}