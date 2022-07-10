// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
public:
vector<vector<int>>res;
vector<int>temp;
void calculate(vector<vector<int>> &grid, int n, int m, int i, int j, vector<int> & temp)
{
    temp.push_back(grid[i][j]);
    if(i+1<n) calculate(grid,n,m,i+1,j,  temp);
    if(j+1<m) calculate(grid,n,m,i,j+1,  temp);
    if(i==n-1 && j==m-1) res.push_back(temp);
    temp.pop_back();
}
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        calculate(grid,n,m,0,0,  temp);
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
  // } Driver Code Ends