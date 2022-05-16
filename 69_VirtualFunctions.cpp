#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person
{
protected:
    string name;
    int age;

public:
    virtual void getdata() {}
    virtual void putdata() {}
};
class Professor : public Person
{
protected:
    int publications;
    static int id;

public:
    void getdata()
    {
        cin >> name >> age >> publications;
    }
    void putdata()
    {
        cout << name << " " << age << " " << publications << " "<<id<<endl;
        id++;
    }
};
int Professor::id=1;
class Student : public Person
{
protected:
    int marks[6];
    static int id1;

public:
    void getdata()
    {
        cin >> name >> age;
        for (int i = 0; i < 6; i++)
        {
            cin >> marks[i];
        }
    }
    void putdata()
    {
        int s = 0;
        for (int i = 0; i < 6; i++)
        {
            s += marks[i];
        }
        cout << name << " " << age << " " << s << " "<<id1<<endl;
        id1++;
    }
};
int Student::id1=1;
int main()
{

    int n, val;
    cin >> n; // The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++)
    {

        cin >> val;
        if (val == 1)
        {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else
            per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
