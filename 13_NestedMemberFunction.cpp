#include <iostream>
#include <string>
using namespace std;
class binary
{
    string a;

public:
    void read(void);
    void chk(void);
    void ones(void);
    void print(void);
};
void binary::read(void)
{
    cout << "Enter a binary number : " << endl;
    cin >> a;
}
void binary::chk(void)
{
    int c = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != '0' && a[i] != '1')
        {
            cout << "Incorrect Binary Format";
            exit(0);
        }
        else
        {
            c = 1;
        }
    }
    if (c == 1)
    {
        cout << "Binary Number !!!" << endl;
    }
}
void binary::ones(void)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '1')
        {
            a[i] = '0';
        }
        else if (a[i] == '0')
        {
            a[i] = '1';
        }
    }
}
void binary::print(void)
{
    cout << a;
}
int main()
{
    binary b;
    b.read();
    b.chk();
    b.ones();
    b.print();
    return 0;
}