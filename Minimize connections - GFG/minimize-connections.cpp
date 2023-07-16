//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

#define ll long long
#define vll vector<ll>
#define repe(i,a,b) for(ll i=a;i<=b;i++)
#define f first
#define s second
class Solution{
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

        int minimumConnections(vector<vector<int>> &c,int n)
        {
            DSU ds(n);
            int extra=0;
            for(auto d:c) 
            {
                
                if(ds.findUpar(d[0])!=ds.findUpar(d[1]))  ds.Unionbyrank(d[0],d[1]);
                else extra++;
            }
            
            int cc=0;
            for(int i=0; i<n; i++) if(ds.findUpar(i)==i) cc++;
            if(cc-1>extra) return -1;
            return cc-1;
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m;
        cin>>m;
        vector<vector<int>> c(m,vector<int> (2));
        for(auto &j:c)
            cin>>j[0]>>j[1];
        Solution s;
        cout<<s.minimumConnections(c,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends