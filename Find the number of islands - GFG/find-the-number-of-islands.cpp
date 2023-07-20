//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define ll long long
#define vpll vector<pair<ll,ll>>
class Solution {
  public:
    // Function to find the number of islands.
    vpll dir8={{-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,0}, {0,1}, {1,-1}, {1,0}, {1,1}};
    bool valid_index(ll i, ll j, ll n, ll m)
 {
  return (i>=0 && i<n && j>=0 && j<m);
 }

    void dfs(int i, int j, int n, int m, vector<vector<char>>& grid,  vector<vector<int>> &vis)
    {
        
        vis[i][j]=1;
        // cout<<i<<" "<<j<<endl;
        for(auto d:dir8)
        {
            int ni=i+d.first, nj=j+d.second;
            if(valid_index(ni,nj,n,m) && vis[ni][nj]==0 && grid[ni][nj]=='1') 
            dfs(ni,nj,n,m,grid,vis);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int cc=0, n=grid.size(), m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(!vis[i][j] && grid[i][j]=='1')
                {
                    cc++;
                    dfs(i,j,n,m,grid,vis);
                    // cout<<endl;
                }
            }
        }
        
        return cc;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends