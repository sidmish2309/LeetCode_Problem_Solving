//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  bool okay(double mid, vector<int>&s, int k)
  {
      int cnt=0;
      for(int i=1; i<s.size(); i++) cnt+=(s[i]-s[i-1])/mid;
      return cnt<=k;
  }
    double findSmallestMaxDist(vector<int> &s, int k){
      double eps=1e-7;
      int n=s.size();
      double low=0, high=(s[n-1]-s[0]);
      double ans=high;
      while(high-low>eps)
      {
             double mid=(low+high)/2;
             if(okay(mid,s,k))
             {
                 ans=mid;
                 high=mid;
             }
             else low=mid;
      }
      
      return ans;
    }
};

//{ Driver Code Starts.
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> stations(n);
    for (int i = 0; i < n; i++)
    {
      cin >> stations[i];
    }
    int k;
    cin >> k;
    Solution obj;
    cout << fixed << setprecision(2) << obj.findSmallestMaxDist(stations, k) << endl;
  }
  return 0;
}
// } Driver Code Ends