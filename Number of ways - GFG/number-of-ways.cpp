// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long int arrangeTiles(int N){
       // N=1--> tiles=1; (1 way)
       // N=2--> tiles=2; (1 way)
       //N=3---> tiles=3; (1 way)
       
       // N=4---> (way-1)--> place all 4 tiles vertically
              //  (way-2)--> place all 4 tiles horizontally
      
       // N=5---> (way-1)--> place all 5 tiles horizontally
              //  (way-2)--> place all 4 tiles vertical and 1 horizontal
              //  (way-3)--> place 1 tile vertical and 4 horizontal
              
              // Now, we will observe overlapping subprblm (DP)
              
      // N=6---> place one tile horizontally--> and we get same N=5 grid again(3 ways)
           //place 4 tiles vertically--> and we get same N=2 grid again(1 way)
           // so, for (N=6)=(N=5)+(N=2)-----> 3+1==4 ways
           
           
     // N=7---> place one tile horizontally--> and we get same N=6 grid again(4 ways)
           //place 4 tiles vertically--> and we get same N=3 grid again(1 way)
           // so, for (N=7)=(N=6)+(N=3)-----> 4+1==5 ways
           
           //ans---> N=ans(N-1) + ans(N-4)
           
           //Approach--1--> Recursive---> will give TLE;
           // if(N<4) return 1;
           // return arrangeTiles(N-1) + arrangeTiles(N-4);
           
           // Approach 2-->DP(optimisation)
           vector<long long int>dp(N+1,1);  // taking long long int coz, 
           //ans can be large
           for(int i=4; i<=N; i++)
           dp[i]=dp[i-1]+dp[i-4];
           return dp[N];
      
      
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.arrangeTiles(N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends