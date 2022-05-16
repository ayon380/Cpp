#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;// O(n) notation
void Palindrome(vector<char> v1)
{
    int c=0;
    for(int i=0; i<v1.size(); i++)
    {
        if(v1[i]==v1[v1.size()-i-1])
        c++;
    }
    cout<<c<<" "<<endl;
    if (c==v1.size())
    {
        cout<<"Palindrome Arraay";
    }
    else
    {
        cout<<"Not a Palindrome Arraay";
    }
}
void display(vector<char> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<char> v1;
    int i = 0;
    char c;
    cout << "Enter ~ to stop entering values..." << endl;
    while (1)
    {
        cout << "enter the value  for position " << i + 1 << endl;
        cin >> c;
        if (c == '~')
        {
            break;
        }
        else
        {
            v1.push_back(c);
            i++;
        }
    }
    Palindrome(v1);
    return 0;
}