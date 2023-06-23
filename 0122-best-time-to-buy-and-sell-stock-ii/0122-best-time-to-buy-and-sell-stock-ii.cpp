#define vi vector<int>
#define vvi vector < vi >
class Solution {
public:
    int dp[30001][2];
    int solve(int ind, int buy, vector<int> & prices)
    {
        if(ind==prices.size()) return 0;
        if(dp[ind][buy]!=-1) return dp[ind][buy];
        int profit=0;
        if(buy) profit=max(-prices[ind]+solve(ind+1,0, prices), 0+ solve(ind+1,1,prices));
        
        else profit=max(prices[ind]+solve(ind+1,1, prices), 0+ solve(ind+1,0,prices));
        
        return dp[ind][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
      // any no. of transactions
        // dp[i][j]---> max profit from index i to end if I either buy or sell
        memset(dp,-1,sizeof(dp));
        return solve(0,1,prices);
    }
};