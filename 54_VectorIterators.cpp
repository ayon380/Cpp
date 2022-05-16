#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    int n, a;
    cout << "Enter the size  :" << endl;
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the element " << i << endl;
        cin >> a;
        v1.push_back(a);
    }

    for (int i = 1; i <= 5; i++)
        v1.push_back(i);

    for (auto i : v1)
    {
        cout << i << endl;
    }

    cout << "v1.begin   " << *v1.begin() << endl;

    cout << "v1.cbegin   " << *v1.cbegin() << endl;

    cout << "v1.end   " << *v1.cend() << endl; // This will give a garbage value it points to the next element after the last element

    for (auto i = v1.begin(); i < v1.end(); i++)
    {
        cout << *i << endl;
    }

    for (auto i = v1.cbegin(); i < v1.cend(); i++)
    {
        cout << *i << "   ";
    }

    cout << "v1.rbegin   " << *v1.rbegin() << endl;
    cout << "v1.rend   " << *v1.rend() << endl; // This will give a garbage value as it is pointing to the theoretical element preceding the first element in the vector

    for (auto i = v1.rbegin(); i < v1.rend(); i++)
    {
        cout << *i << "   ";
    }

    cout << "v1.rbegin   " << *v1.rbegin() << endl;
    cout << "v1.rend   " << *v1.rend() << endl;

    for (auto i = v1.cbegin(); i < v1.cend(); i++)
    {
        cout << *i << "   ";
    }

    cout << "v1.crbegin   " << *v1.crbegin() << endl;
    cout << "v1.crend   " << *v1.crend() << endl;

    for (auto i = v1.crbegin(); i < v1.crend(); i++)
    {
        cout << *i << "   ";
    }
    return 0;
}