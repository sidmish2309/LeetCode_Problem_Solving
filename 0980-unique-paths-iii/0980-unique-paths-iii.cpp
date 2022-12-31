class Solution {
public:
    vector<pair<int,int>> dir={{1,0},{0,1},{-1,0},{0,-1}};
    int ans;
    void dfs(int x, int y, vector<vector<int>>& vis, vector<vector<int>>& grid, int &empty, int n, int m)
    {
        if(x<0 || x>=n || y<0 || y>=m || grid[x][y]==-1 || vis[x][y]) return;
        
        if(grid[x][y]==2 && empty==0) ans++;
        
        vis[x][y]=1;
        empty--;
        
        for(auto z:dir)
        {
            int p=x+z.first, q=y+z.second;
            dfs(p,q,vis,grid,empty,n,m);
        }
        
        vis[x][y]=0;
        empty++;
    }
      
    int uniquePathsIII(vector<vector<int>>& grid) {
        
        //since we have to travel to all empty cells.
        int empty=0, n=grid.size(), m=grid[0].size(), st, en;
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==0 || grid[i][j]==1) empty++;
                if(grid[i][j]==1) st=i,en=j;
            }
        }
        
        dfs(st,en,vis,grid,empty, n, m);
        return ans;
        
    }
};