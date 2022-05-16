#include <iostream>
using namespace std;
template <class a>
class vector
{
protected:
    int size;
    a *arr;

public:
    vector(int n)
    {
        size = n;
        arr = new a[size];
    }
    void input()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Enter the value of the index  " << i << endl;
            cin >> arr[i];
        }
        cout<<"input successful !!"<<endl;
    }
    a dotproduct(vector v1,vector v2)
    {
        a s=0;
        for(int i=0;i<size;i++)
        {
            s+=(v1.arr[i]*v2.arr[i]);
        }
        return s;
    }
};
int main()
{
    vector<int> v1(4),v2(4);
    v1.input();
    v2.input();
    cout<<v1.dotproduct(v1,v2);
    return 0;
}