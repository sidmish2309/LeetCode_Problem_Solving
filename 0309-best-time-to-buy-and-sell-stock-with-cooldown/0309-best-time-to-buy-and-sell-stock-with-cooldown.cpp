class Solution {
public:
     int dp[5001][2];
     int solve(int ind, int buy, vector<int> &prices, int n)
    {
        if(ind>=n) return 0;
        if(dp[ind][buy]!=-1) return dp[ind][buy];
        int profit=0;
        if(buy)
        {
            int consider=-prices[ind]+solve(ind+1, 0, prices, n);
            int notconsider=0+solve(ind+1,1,prices,n);
            profit=max(consider,notconsider);
        }
        
        else
        {
            int consider=prices[ind]+solve(ind+2, 1,prices, n);
            int notconsider=0+solve(ind+1,0,prices,n);
            profit=max(consider,notconsider);
        }
        
        return dp[ind][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
         memset(dp,-1,sizeof(dp));
       int n=prices.size();
       return solve(0,1,prices,n);
    }
};