class Solution {
public:
    int mod=1e9+7;
    int dp[31][1001];
    int f(int k,int n, int t)
    {   //Base
        if(n<0 || t<0) return 0;
        if(n==0 && t==0) return 1;
        if(dp[n][t]!=-1) return dp[n][t];
        int ans=0;
        for(int i=1; i<=k; i++)
        (ans+=f(k,n-1,t-i))%=mod;
        return dp[n][t]=ans%mod;
    }
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,-1,sizeof dp);
        int ans=f(k,n,target);
        return ans%mod;
    }
};