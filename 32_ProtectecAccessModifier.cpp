#include <iostream>
using namespace std;
class base
{
protected:
    int a = 1;

private:
    int b;

public:
    int c;
};
class derived : protected base
{
public:
    void get()
    {
        cout << a;
    }
};
int main()
{
    derived d1;
    d1.get();
    return 0;
}