#include <iostream>
using namespace std;
class employee
{
    int data1;

public:
    employee() {}
    int data2;
    void setData(int a, int b)
    {
        data1 = a;
        data2 = b;
    }
    int getData1()
    {
        return data1;
    }
    int getData2()
    {
        return data2;
    }
};
class derived : private employee
{
    int data3;

public:
    void process()
    {
        setData(4, 5);
        data3 = data2 * getData1();
    }
    void display()
    {
        cout << "Data1 : " << getData1() << endl;
        cout << "Data2 : " << data2 << endl;
        cout << "Data3 : " << data3 << endl;
    }
};
int main()
{
    derived d1;
    
    d1.process();
    d1.display();
    return 0;
}