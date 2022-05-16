#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
class simple
{
protected:
    float a, b;

public:
    void inputa()
    {
        cout << "Enter tha 1st Value : ";
        cin >> a;
    }
    void inputb()
    {
        cout << "Enter the 2nd Value : ";
        cin >> b;
    }
    float add()
    {
        return (a + b);
    }
    float sub()
    {
        return (a - b);
    }
    float multiply()
    {
        return (a * b);
    }
    float div()
    {
        return (a / b);
    }
    float power()
    {
        return pow(a, b);
    }
    float mod()
    {
        return fmod(a, b);
    }
};
class scientific
{
protected:
    int a;

public:
    void setdata()
    {
        cout << "Enter tha value : ";
        cin >> a;
    }
    float fact()
    {
        float q = 1;
        for (int i = 1; i <= a; i++)
        {
            q *= i;
        }
        return q;
    }
    float sine()
    {
        return sin(a);
    }
    float cosine()
    {
        return cos(a);
    }
    float tangent()
    {
        return tan(a);
    }
    float cosec()
    {
        return (1.0 / sin(a));
    }
    float cot()
    {
        return (1 / tan(a));
    }
    float sec()
    {
        return (1 / cos(a));
    }
};
class hybrid : public simple, public scientific
{
protected:
    int n;

public:
    void setn()
    {
        while (1)
        {
            cout << "**************  CALCULATOR  *****************\n";
            cout << "Enter any number to perform following operations :: \n";
            cout << "1.To ADD\n";
            cout << "2.To Substract\n";
            cout << "3.To Multiply\n";
            cout << "4.To Divide\n";
            cout << "5.To Find Power\n";
            cout << "6.To Find Modulus\n";
            cout << "7.To Calculate Sine\n";
            cout << "8.To Calculate Cosine\n";
            cout << "9.To Calculate Tangent\n";
            cout << "10.To Calculate Cosec\n";
            cout << "11.To Calculate Cot\n";
            cout << "12.To Calculate Sec\n";
            cout << "13.To Find Factorial\n";
            cout << "14.To Exit...";
            cin >> n;
            if (n == 14)
            {
                exit(0);
            }
            if (n > 15 && n < 1)
            {
                cout<<"Wrong Value!!!!!!!!"<<endl;
                setn();
            }
            if (n < 7)
            {
                inputa();
                inputb();
            }
            if (n > 6)
            {
                setdata();
            }
            if (n == 1)
            {
                cout << "The Addition value is  : " << add()<<endl;
            }
            if (n == 2)
            {
                cout << "The Difference is : " << sub()<<endl;
            }
            if (n == 3)
            {
                cout << "The Multiplication is : " << multiply()<<endl;
            }
            if (n == 4)
            {
                cout << "The Division is : " << div()<<endl;
            }
            if (n == 5)
            {
                cout << "The Power value is : " << power()<<endl;
            }
            if (n == 6)
            {
                cout << "The Modulus Value is ; " << mod()<<endl;
            }
            if (n == 7)
            {
                cout << "The Sine value is  : " << sine()<<endl;
            }
            if (n == 8)
            {
                cout << "The Cosine Value is  : " << cosine()<<endl;
            }
            if (n == 9)
            {
                cout << "The Tangent Value is : " << tangent()<<endl;
            }
            if (n == 10)
            {
                cout << "The Cosine Value is : " << cosec()<<endl;
            }
            if (n == 11)
            {
                cout << "The Cot Value is  : " << cot()<<endl;
            }
            if (n == 12)
            {
                cout << "The Sec value is : " << sec()<<endl;
            }
            if (n == 13)
            {
                cout << "The Factorial is : " << fact()<<endl;
            }
            cout<<"\n\n";
        }
    }
};
int main()
{
    hybrid h1;
    h1.setn();
    return 0;
}