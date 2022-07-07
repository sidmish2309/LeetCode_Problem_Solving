class Solution {
public:
    int dp[105][105];
    bool ok(string &s1, string &s2, string &s3, int i, int j, int k)
    {
        if(k==s3.length())
        {
            if(i==s1.length() && j==s2.length()) return dp[i][j]=true;
            return false;
        }
        
        if(dp[i][j]!=-1) return dp[i][j];
        
       if(s1[i]==s3[k])
       {
           if(s2[j]==s3[k])
           {
               bool check=ok(s1,s2,s3,i+1,j,k+1);
               if(check) return dp[i][j]=true;
               return dp[i][j]=ok(s1,s2,s3,i,j+1,k+1);
           }
           return dp[i][j]=ok(s1,s2,s3,i+1,j,k+1);
       }
        
        if(s2[j]==s3[k]) return dp[i][j]=ok(s1,s2,s3,i,j+1,k+1);
        
        //Agar naa s1[i] eqaul hai naa s2[j] equal hai.
        return dp[i][j]=false;
        
        
    }
    
    bool isInterleave(string s1, string s2, string s3) {
        //DYNAMIC PROGRAMMING
    // We have to define some states    
      //---> if I can make my string true with curr i and j;
        
        if(s1.length()+s2.length()!=s3.length()) return false;
        memset(dp,-1,sizeof(dp));
        return ok(s1,s2,s3,0,0,0);
        
    }
};