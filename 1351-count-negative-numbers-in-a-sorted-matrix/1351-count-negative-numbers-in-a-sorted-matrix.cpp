class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0; i<n; i++)
        {
        reverse(grid[i].begin(),grid[i].end());
         int upper=0;
            int low=0, high=m-1;
            while(low<=high)
            {
                int mid=(low+high)>>1;
                if(grid[i][mid]>=0)
                {
                    upper=mid;
                    // cout<<upper<<" ";
                    high=mid-1;
                }
                else
                    low=mid+1;
            }
            cout<<low<<" ";
            if(low==m)
                ans+=low;
            else
            ans+=upper;
        }
        return ans;
    }
};