#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int q=num-1;
    for(int i = 0; i < num; i++)
    { 
        for(int j=q; j>0; j--)
        {
            cout<<"  ";
        }
        if(i==0 || i==num-1)
        { 
            for(int j = 0; j < num; j++)
            { 
                cout<<" #";
            }
        }
        else{
            for(int j = 0; j < num; j++)
            { 
                if(j==0 || j==num-1)
                { 
                    cout<<" #";
                }
                else
                { 
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
        q--;
    }
    return 0;
}