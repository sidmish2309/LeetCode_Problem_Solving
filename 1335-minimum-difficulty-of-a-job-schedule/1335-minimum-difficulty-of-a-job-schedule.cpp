class Solution {
public:
    int solve(vector<int> &jd, int ind, int d, int n, vector<vector<int>> &dp)
    { 
         
        
        if(d==1) // base case
        {
            return *max_element(jd.begin()+ind,jd.end());
        }
        
       if(dp[ind][d]!=-1) return dp[ind][d];
        
        int finalres=1e9, maxi=-1e9;
        for(int i=ind; i<=n-d; i++)
        {
            maxi=max(maxi,jd[i]);

            int res=maxi + solve(jd,i+1,d-1,n,dp);
            
            finalres=min(finalres,res);
        }
        
        return dp[ind][d]=finalres;
        
    }
    int minDifficulty(vector<int>& jd, int d) {
      int n=jd.size();
    if(n<d) return -1;
      vector<vector<int>> dp(n+1,vector<int>(d+1,-1));
    return solve(jd,0,d,n,dp);
      
    }
};