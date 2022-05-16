#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *b = new int(43);
    // delete b;
    cout << "The value of a : " << *b << endl;
    int *a = new int[5];
    *(a + 0) = 4;
    *(a + 1) = 5;
    *(a + 2) = 9;
    *(a + 3) = 2;
    *(a + 4) = 1;
    delete[] a;
    cout << *(a + 0) << endl;
    cout << *(a + 1) << endl;
    cout << *(a + 2) << endl;
    cout << *(a + 3) << endl;
    cout << *(a + 4) << endl;
    return 0;
}