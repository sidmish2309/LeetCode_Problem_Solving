//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#define ll long long
#define mod 1000000007
#define vll vector<ll>
class Solution{
public:

ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
 
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}

 vll factt(ll n)
  {
    vll fact(n+1,1);
  
      ll factorial=1;
    for(ll i=1; i<=n; i++)
      (fact[i]=(fact[i-1]*i))%=mod;
    
     return fact;
  }
    vll v=factt(1001);
    int nCr(int n, int r){
      if(n<r) return 0;
      ll p=mod_mul(v[n],inv(v[r]));
      return (int)mod_mul(p,inv(v[n-r]));
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends