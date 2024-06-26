//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
 int f(int ind, int n, int price[], vector<vector<int>> &dp) // till index ind what is max price I can obtain
 {
     if(ind==0) return n*price[0];
     if(dp[ind][n]!=-1) return dp[ind][n];
     int nottake=0+f(ind-1,n,price,dp);
     int take=-1e9, rodlength=ind+1;
     if(rodlength<=n) take=price[ind]+f(ind,n-rodlength,price,dp);
     return dp[ind][n]=max(take,nottake);
 }
class Solution{
  public:
    int cutRod(int price[], int n) {
        vector<vector<int>> dp(n,vector<int> (n+1,-1));
        return f(n-1,n,price,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends