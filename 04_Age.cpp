#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age :"<<endl;
    cin>>age;
    if(age < 18)
    {
        cout<<"You are a Baby";
    }
    else if(age > 17 && age <61)
    {
        cout<<"You are an adult"<<endl;
    }
    else if(age >60)
    {
        cout<<"You are a Senior Citizen "<<endl;
    }
    return 0;
}
