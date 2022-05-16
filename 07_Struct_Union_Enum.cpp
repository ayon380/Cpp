#include <iostream>
using namespace std;
typedef struct employee
{
    int Eid;
    char c;
    float salary;
} em;
typedef union money
{
    int rice;
    char c;
    float salary; /* data */
} money;
int main()
{
    // structure
    em ayon;
    ayon.Eid = 101;
    ayon.salary = 544879879;
    cout << ayon.salary << endl;

    // Union
    money m1;
    m1.rice = 41;
    m1.salary = 98;
    cout << m1.salary<<endl;

    // Enum
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    Meal m2 = lunch;
    cout << m2;
    return 0;
}