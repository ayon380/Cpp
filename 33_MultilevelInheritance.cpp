#include <iostream>
using namespace std;
class student
{
protected:
    int id;

public:
    void setid()
    {
        cout << "Enter the Student ID :" << endl;
        cin >> id;
    }
    int getid()
    {
        return id;
    }
};
class exam : public student
{
protected:
    int phy, math, chem;

public:
    void setmarks()
    {
        cout << "Enter your Physics Marks :";
        cin >> phy;
        cout << "Enter your Mathematics Marks :";
        cin >> math;
        cout << "Enter your Chemistry Marks :";
        cin >> chem;
    }
    void getmarks()
    {
        cout << "Marks in Physics :" << phy << endl;
        cout << "Marks in Mathematics :" << math << endl;
        cout << "Marks in Chemistry : " << chem << endl;
    }
};
class result : public exam
{
public:
    float percent()
    {
        return ((phy + chem + math) / 3.0);
    }
};
int main()
{
    result ayon;
    ayon.setid();
    ayon.setmarks();
    ayon.getmarks();
    cout << "Percentage of studentID (" << ayon.getid() << "): " << ayon.percent() << endl;
    return 0;
}