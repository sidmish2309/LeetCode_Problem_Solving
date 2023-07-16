//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#define ll long long
#define vll vector<ll>
#define repe(i,a,b) for(ll i=a;i<=b;i++)
#define f first
#define s second
class Solution {
  public:
  class DSU  // O(4alpha)
  {
    vll parent, rank, size;
  public:
    DSU(ll n)  
    {
      rank.resize(n+1,0);
      parent.resize(n+1);
      size.resize(n+1,1);

      repe(i,0,n) parent[i]=i;
    }

    int findUpar(ll node)
    {
      if(parent[node]==node) return node;
      return parent[node]=findUpar(parent[node]);  // path compression
    }

    void Unionbyrank(ll u, ll v)
    {
      ll pu=findUpar(u), pv=findUpar(v);
      if(pu==pv) return;

      if(rank[pu]<rank[pv]) parent[pu]=pv;
      else if(rank[pv]<rank[pu]) parent[pv]=pu;
      else
      {
        parent[pv]=pu;
        rank[pu]++;
      }
    }

    void Unionbysize(ll u, ll v)
    {
      ll pu=findUpar(u), pv=findUpar(v);
      if(pu==pv) return;

      if(size[pu]<size[pv])
      {
        parent[pu]=pv;
        size[pv]+=size[pu];
      }
      else  // equal wala bhi done
      {
        parent[pv]=pu;
        size[pu]+=size[pv];
      }
    }

    int query()
    {
      return 0;
    }


  };
    int maxRemove(vector<vector<int>>& stones, int n) {
        // ans= (x1-1) + (x2-1) + (x3-1)+....
        //      =(x1+x2+x3...)-(CC)
            //   =n-CC
            
            unordered_map<int,int> mp;
            int maxrow=0, maxcol=0;
            for(auto it:stones)
            {
                maxrow=max(maxrow,it[0]);
                maxcol=max(maxcol,it[1]);
            }
            
            DSU ds(maxrow+maxcol+1);
              for(auto it:stones)
            {
                int noderow=it[0], nodecol=it[1]+maxrow+1;
                ds.Unionbysize(noderow,nodecol);
                mp[noderow]=1;
                mp[nodecol]=1;
                
            }
            
            int cc=0;
            for(auto it:mp)
            {
                if(ds.findUpar(it.f)==it.f) cc++;
            }
            
            return n-cc;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> adj;

        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int i = 0; i < 2; ++i) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;

        cout << obj.maxRemove(adj, n) << "\n";
    }
}
// } Driver Code Ends