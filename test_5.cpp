#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>
using namespace std;

class trainer
{
public:
  int arr[2][2]={0}; // taken number of trainers to be 2
  int m;         // no. of members
  void input()
  {
    int choice;
    cout << "Enter Batch Preference choice from 1 to 2" << endl;
    cin >> choice;
    choice-=1;
    if (arr[choice][0] == arr[choice][1])
    {
      arr[choice][0]++;
    }
    else if (arr[choice][0] <= arr[choice][1])
    {
      arr[choice][0]++;
    }
    else
    {
      arr[choice][1]++;
    }
  }
  void output()
  {
    for(int i=0;i<2;i++)
    {
      for(int j=0;j<2;j++)
      {
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
  }
};
int main()
{
  trainer t;
  t.input();
  t.output();
  t.input();
  t.output();
  t.input();
  t.output();
}