#include <iostream>
using namespace std;
struct student
{
    int a;
    string b;
    string c;
    int d;
};
int main()
{
    struct student s1;
    cin>>s1.a;
    cin>>s1.b;
    cin>>s1.c;
    cin>>s1.d;
    cout<<s1.a<<" "<<s1.b<<" "<<s1.c<<" "<<s1.d;
    return 0;
}