#include <iostream>
using namespace std;
class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a, int b, int c);
    void getData()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;
    }
};
void employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employee Ayon;
    Ayon.setData(1, 2, 3);
    Ayon.d = 4;
    Ayon.e = 5;
    Ayon.getData();
    return 0;
}