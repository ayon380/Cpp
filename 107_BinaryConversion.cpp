#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int input1()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    return n;
}
string input2()
{
    string a;
    cout << "Enter the number : ";
    cin >> a;
    return a;
}
int btod(int n)
{
    int d, s = 0, i = 0;
    while (n > 0)
    {
        d = n % 10;
        s += (pow(2, i) * d);
        n /= 10;
        i++;
    }
    return s;
}
int otod(int n)
{
    int d, s = 0, i = 0;
    while (n > 0)
    {
        d = n % 10;
        s += (d * pow(8, i));
        n /= 10;
        i++;
    }
    return s;
}
int htod(string a)
{
    int n = a.size();
    int s = 0, q = 0;
    n -= 1;
    for (int i = n; i >= 0; i--)
    {
        if (a[i] == 'A')
        {
            s += (10 * pow(16, q));
        }
        else if (a[i] == 'B')
        {
            s += (11 * pow(16, q));
        }
        else if (a[i] == 'C')
        {
            s += (12 * pow(16, q));
        }
        else if (a[i] == 'D')
        {
            s += (13 * pow(16, q));
        }
        else if (a[i] == 'E')
        {
            s += (14 * pow(16, q));
        }
        else if (a[i] == 'F')
        {
            s += (15 * pow(16, q));
        }
        else
        {
            int w = a[i];
            w -= '0';
            s += (w * pow(16, q));
        }
        q++;
    }
    return s;
}
void dtob(int n)
{
    int a;
    vector<int> v1;
    while (n > 0)
    {
        a = n % 2;
        v1.push_back(a);
        n /= 2;
    }
    reverse(v1.begin(), v1.end());
    cout << "Binary Value : ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i);
    }
    cout << endl;
}
void dtoo(int n)
{
    int a;
    vector<int> v1;
    while (n > 0)
    {
        a = n % 8;
        v1.push_back(a);
        n /= 8;
    }
    cout << "Octal Value : ";
    reverse(v1.begin(), v1.end());
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i);
    }
    cout << endl;
}
void dtoh(int n)
{
    int a;
    vector<char> v1;
    while (n > 0)
    {
        a = n % 16;
        if (a == 10)
            v1.push_back('A');
        else if (a == 11)
            v1.push_back('B');
        else if (a == 12)
            v1.push_back('C');
        else if (a == 13)
            v1.push_back('D');
        else if (a == 14)
            v1.push_back('E');
        else if (a == 15)
            v1.push_back('F');
        else
        {
            char b=a+'0';
            v1.push_back(b);
        }
        n /= 16;
    }
    cout << "Hexadecimal Value : ";
    reverse(v1.begin(), v1.end());
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i);
    }
    cout << endl;
}
int main()
{
    while (1)
    {
        int n;
        cout << "***********   BINARY CONVERSION     *******************\n";
        cout << "Enter your choice  : \n";
        cout << "1. Binary to Decimal\n";
        cout << "2. Octal to Decimal\n";
        cout << "3. Hexadecimal to Decimal\n";
        cout << "4. Decimal to Binary\n";
        cout << "5. Decimal to Octal\n";
        cout << "6.Decimal to Hexadecimal\n";
        cout << "7. Exit program\n";
        cin >> n;
        if (n == 1)
        {
            cout << "Decimal Value   : " << btod(input1()) << endl;
        }
        if (n == 2)
        {
            cout << "Decimal Value : " << otod(input1()) << endl;
        }
        if (n == 3)
        {
            cout << "Decimal Value : " << htod(input2()) << endl;
        }
        if (n == 4)
        {
            dtob(input1());
        }
        if (n == 5)
        {
            dtoo(input1());
        }
        if (n == 6)
        {
            dtoh(input1());
        }
        if (n == 7)
        {
            exit(0);
        }
    }
    return 0;
}