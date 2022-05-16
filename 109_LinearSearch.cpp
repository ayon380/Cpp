#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int LinearSearch(vector<int> v1, int n)
{
    bool r=false;
    for (int i = 0; i < v1.size(); i++)
    {
        if (n == v1.at(i))
        {
            return i;
            r=true;
            break;
        }
        else
        {
            continue;
        }
    }
    if(r==false)
    {
        return -1;
    }
}
int main()
{
    vector<int> v1;
    int i = 0;
    char c;
    cout << "Enter ~ to stop entering values..." << endl;
    while (1)
    {
        cout << "enter the value  for position " << i+1<< endl;
        cin >> c;
        if (c == '~')
        {
            break;
        }
        else
        {
            int a = c - '0';
            v1.push_back(a);
            i++;
        }
    }
    int w;
    cout << "Enter the no to be searched" << endl;
    cin >> w;
    int q = LinearSearch(v1, w);
    if(q<0)
    {
        cout<<"Number not in the array";
    }
    else{
        cout<<"Number found in the array at position : "<<q+1<<endl;
    }
    return 0;
}