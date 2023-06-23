class Solution {
public:
    int dp[100001][2][3];
    int solve(int ind, int buy, int cap, vector<int> &prices, int n)
    {
        if(ind==n) return 0;
        if(cap==0) return 0;
        if(dp[ind][buy][cap]!=-1) return dp[ind][buy][cap];
        int profit=0;
        if(buy)
        {
            int consider=-prices[ind]+solve(ind+1, 0, cap,prices, n);
            int notconsider=0+solve(ind+1,1,cap,prices,n);
            profit=max(consider,notconsider);
        }
        
        else
        {
            int consider=prices[ind]+solve(ind+1, 1, cap-1,prices, n);
            int notconsider=0+solve(ind+1,0,cap,prices,n);
            profit=max(consider,notconsider);
        }
        
        return dp[ind][buy][cap]=profit;
    }
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
      int n=prices.size();
      return solve(0,1,2, prices, n);
    }
};