#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void SelectionSort(vector<int>& v1)
{
  for(int i = 0; i < v1.size()-1; i++)
  {
      for(int j = i+1; j < v1.size(); j++)
      {
          if(v1[j]<v1[i])
          {
              int t=v1[j];
              v1[j] = v1[i];
              v1[i] = t;
          }
      }
  }
}
void display(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] <<" ";
    }
    cout << endl;
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
    cout << "Before Sorting..." << endl;
    display(v1);
    SelectionSort(v1);
    cout << "After Sorting..." << endl;
    display(v1);
    return 0;
}