class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
       int n=grid.size(), m=grid[0].size();
        int ans=0;
        for(int i=0; i<n; i++)
        {
            // reverse(grid[i].begin(),grid[i].end());
            int ub=upper_bound(grid[i].rbegin(),grid[i].rend(),-1)-grid[i].rbegin();
            ans+=ub;
        }
        return ans;
    }
};