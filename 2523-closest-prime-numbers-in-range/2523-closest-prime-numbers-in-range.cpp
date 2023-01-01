#define ll long long
class Solution {
public:
    // Sieve of Erastosthenes---> O(n* log(logn))
  vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; 
  for (int i = 2; i <= n; i++)
  if (arr[i] == 0) {vect.push_back(i); 
  for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
    
    vector<int> closestPrimes(int left, int right) {
      vector<ll> v=sieve(1000000);
    
        int lb=lower_bound(v.begin(),v.end(),left)-v.begin();
        int ub=upper_bound(v.begin(),v.end(),right)-v.begin();
        ub--;
        
        vector<int> ans={-1,-1};
        int diff=INT_MAX;
        for(int i=lb ; i<ub; i++)
        {
                if(v[i+1]-v[i]<diff)
                {
                    diff=v[i+1]-v[i];
                    ans[0]=v[i];
                    ans[1]=v[i+1];
                }
        }
        
        return ans;
        
       
    }
};