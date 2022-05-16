#include <iostream>
#include <string>
using namespace std;
class shop
{
    int id;
    float price;
    string str;
    public:
    void setadata(int a ,float b,string s)
    {
        id=a;
        price=b;
        str=s;
    }
    void getdata()
    {
        cout<<"The ID : "<<id<<endl;
        cout<<"The Price  : "<<price<<endl;
        cout<<"Item Name : "<<str<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter no of items  : ";
    cin>>n;
    int id1;
    float price1;
    string str1;
    shop* ptr=new shop[n]; 
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the ID : ";
        cin>>id1;
        cout<<"Enter the price  : ";\
        cin>>price1;
        cout<<"Enter the name of the item  :  "<<endl;
        getline(cin>>ws,str1);
        (*(ptr+i)).setadata(id1,price1,str1);
    }
    for(int i=0;i<n;i++)
    {
        (*(ptr+i)).getdata();
    }
    return 0;
}