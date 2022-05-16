#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void counterr()
    {
        counter = 0;
    }
    void displayprice();
    void setprice();
};
void shop::setprice()
{
    cout << "Enter id of the item : " << endl;
    cin >> itemid[counter];
    cout << "Enter the price of the item : " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop::displayprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << itemid[i] << "   :    " << itemprice[i] << endl;
    }
}
int main()
{
    shop s;
    s.counterr();
    s.setprice();
    s.setprice();
    s.setprice();
    s.displayprice();
    return 0;
}