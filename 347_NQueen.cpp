//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
vector<vector<int>> result;
    bool safe(vector<vector<int>> board,int r,int c)
    {
        int N=board.size();
        for(int i=0;i<c;i++)
        {
            if(board[r][i])
            return false;
        }
        for(int i=r,j=c; j>=0 and i>=0 ;i-- ,j--)
        {
            if(board[i][j])
            return false;
        }
        for(int i=r,j=c;j>=0 and i<N;j--,i++)
        {
            if(board[i][j])
            return false;
        }
        return true;
    }
    bool solve(vector<vector<int>> &board,int c)
    {
        int N=board.size();
        if(c==N)
        {
            vector<int> v;
            for(int i=0;i<N;i++)
            {
                for(int j=0;j<N;j++)
                {
                    if(board[i][j]==1)
                    {
                        v.push_back(j+1);z
                    }
                }
            }
            result.push_back(v);
            return true;
        }
        bool res=false;
        for(int i=0;i<N;i++)
        {
            if(safe(board,i,c))
            {
                board[i][c]=1;
                res=solve(board,c+1)||res;
                board[i][c]=0;
            }
        }
        return res;
    }
    vector<vector<int>> nQueen(int n) {
        // code here
        result.clear();
        vector<vector<int>> v (n,vector<int> (n,0));
        if(solve(v,0)==false)
        {
            return {};
        }
        sort(result.begin(),result.end());
        return result;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends