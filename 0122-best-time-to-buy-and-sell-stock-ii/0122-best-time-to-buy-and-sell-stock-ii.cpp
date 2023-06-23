class Solution {
public:
    int dp[30001][2];
    int solve(int ind, int buy, vector<int> & prices)
    {
        
       
        int profit=0;
        if(buy) profit=max(-prices[ind]+solve(ind+1,0, prices), 0+ solve(ind+1,1,prices));
        
        else profit=max(prices[ind]+solve(ind+1,1, prices), 0+ solve(ind+1,0,prices));
        
        return dp[ind][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
      // any no. of transactions
        // dp[i][j]---> max profit from index i to end if I either buy or sell
        memset(dp,0,sizeof(dp));
        for(int ind=n-1; ind>=0; ind--)
        {
            for(int buy=0; buy<=1; buy++)
            {
           int profit=0;
        if(buy) profit=max(-prices[ind]+dp[ind+1][0], 0+ dp[ind+1][1]);
                
        else profit=max(prices[ind]+dp[ind+1][1], 0+ dp[ind+1][0]);
        dp[ind][buy]=profit;
            }
        }
        
       return dp[0][1];
    }
};