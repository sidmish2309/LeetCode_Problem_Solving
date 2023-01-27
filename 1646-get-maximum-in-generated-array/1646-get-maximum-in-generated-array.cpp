class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n<=1) return n;
        vector<int> dp(n+1);
        dp[0]=0;
        dp[1]=1;
        for(int i=2; i<n+1; i++)
        {
            if(i&1) dp[i]=dp[i/2]+dp[(i/2)+1];
            else dp[i]=dp[i/2];
        }
        
        return *max_element(dp.begin(),dp.end());
    }
};