#include <iostream>
using namespace std;
class id
{
protected:
    int id;

public:
    void setid()
    {
        cout << "Enter your id  : ";
        cin >> id;
    }
    int getid()
    {
        return id;
    }
};
class test : virtual public id
{
protected:
    int phy, math;

public:
    void setmarks()
    {
        cout << "Enter your Physics Marks : ";
        cin >> phy;
        cout << "Enter your Math Marks :";
        cin >> math;
    }
    int getphy()
    {
        return phy;
    }
    int getmath()
    {
        return math;
    }
};
class pt : virtual public id
{
protected:
    int score;

public:
    void setscore()
    {
        cout << "Enter your score in pt : ";
        cin >> score;
    }
    int getscore()
    {
        return score;
    }
};
class result : public pt, public test
{
protected:
    int total, per;

public:
    void display()
    {
        setid();
        setmarks();
        setscore();
        total = phy + math + score;
        per = total / 3;
        cout << "RESULT...........\n";
        cout << "Student ID : " << id << endl;
        cout << "Maths Marks : " << math << endl;
        cout << "Physics Marks : " << phy << endl;
        cout << "Total Marks : " << total << endl;
        cout << "Percentage : " << per << endl;
    }
};
int main()
{
    result ayon;
    ayon.display();
    return 0;
}