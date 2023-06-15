//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        int n=arr.size();
        vector<int> nsl(n,-1), nsr(n,-1);
        stack<int> s,s1;
        for(int i=0; i<n; i++)
        {
          while(!s.empty() && arr[s.top()]>=arr[i]) s.pop();
          if(!s.empty()) nsl[i]=s.top();
          s.push(i);
        }
        
        //1 3 3 -1 3 6 -1 -1
         for(int i=n-1; i>=0; i--)
        {
          while(!s1.empty() && arr[s1.top()]>=arr[i]) s1.pop();
          if(!s1.empty()) nsr[i]=s1.top();
          s1.push(i);
        }
        // for(auto d:nsl) cout<<d<<" ";
        // cout<<endl;
        
        //  for(auto d:nsr) cout<<d<<" ";
        // cout<<endl;
        
        
        vector<int> ans(n,-1);
        for(int i=0; i<n; i++)
        {
            if(nsl[i]==-1 && nsr[i]==-1) continue;
            else if(nsr[i]==-1) ans[i]=nsl[i];
            else if(nsl[i]==-1) ans[i]=nsr[i];
            else if(i-nsl[i]<nsr[i]-i) ans[i]=nsl[i];
            else if(i-nsl[i]>nsr[i]-i) ans[i]=nsr[i];
            else if(i-nsl[i]==nsr[i]-i)
            {
                if(arr[nsl[i]]<=arr[nsr[i]]) ans[i]=nsl[i];
                else ans[i]=nsr[i];
            }
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends