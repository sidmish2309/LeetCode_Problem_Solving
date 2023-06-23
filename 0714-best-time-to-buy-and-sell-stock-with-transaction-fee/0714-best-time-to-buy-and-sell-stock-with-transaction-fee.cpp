class Solution {
public:
    int dp[50001][2];
     int solve(int ind, int buy, vector<int> &prices, int n, int fee)
    {
        if(ind==n) return 0;
        if(dp[ind][buy]!=-1) return dp[ind][buy];
        int profit=0;
        if(buy)
        {
            int consider=-prices[ind]+solve(ind+1, 0, prices, n,fee);
            int notconsider=0+solve(ind+1,1,prices,n,fee);
            profit=max(consider,notconsider);
        }
        
        else
        {
            int consider=prices[ind]+solve(ind+1, 1,prices, n, fee)-fee;
            int notconsider=0+solve(ind+1,0,prices,n,fee);
            profit=max(consider,notconsider);
        }
        
        return dp[ind][buy]=profit;
    }
    int maxProfit(vector<int>& prices, int fee) {
       memset(dp,-1,sizeof(dp));
       int n=prices.size();
       return solve(0,1,prices,n,fee);
    }
};