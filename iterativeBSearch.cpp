#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> v, int To_Find)
{
    int lo = 0, hi = v.size() - 1;
    int mid;
    // This below check covers all cases , so need to check
    // for mid=lo-(hi-lo)/2
    while (hi - lo > 1)
    {
        int mid = (hi + lo) / 2;
        if (v[mid] < To_Find)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (v[lo] == To_Find)
    {
        cout << "Found"
             << " At Index " << lo << endl;
    }
    else if (v[hi] == To_Find)
    {
        cout << "Found"
             << " At Index " << hi << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}

int main()
{
    clock_t a, b;
    a = clock();
    ; // start of time function
      // start code
    vector<int> v = {1, 3, 4, 5, 6};
    int To_Find = 1;
    binarySearch(v, To_Find);
    To_Find = 6;
    binarySearch(v, To_Find);
    To_Find = 10;
    binarySearch(v, To_Find);

    // end of code
    b = clock();
    double time_taken = double(b - a) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    return 0;
}