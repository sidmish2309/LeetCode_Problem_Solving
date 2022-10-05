vector<vector<int>> dp(5,vector<int>(51,-1));
class Solution {
public:
    int f(int i, int n)
    {   
        if(n==0) return 1;
        if(i<0) return 0;
        
        if(dp[i][n]!=-1) return dp[i][n];
        int notpick=f(i-1,n);
        int pick=f(i,n-1);
        return dp[i][n]=notpick+pick;
    }
    int countVowelStrings(int n) {
         return f(4,n);
    }
};