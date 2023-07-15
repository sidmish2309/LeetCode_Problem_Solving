//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define ll long long
#define vll vector<ll>
#define repe(i,a,b) for(ll i=a;i<=b;i++)
 #define f first
 #define s second
class Solution
{
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
  
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        DSU ds(V);
       vector<pair<int,pair<int,int>>> edges;
       for(int i=0; i<V; i++)
       {
          for(auto it:adj[i])
          {
              edges.push_back({it[1],{i,it[0]}});
          }
       }
       
       sort(edges.begin(),edges.end());
       int mstsum=0;
       for(auto d:edges)
       {
           if(ds.findUpar(d.s.f)!=ds.findUpar(d.s.s))
           {
               mstsum+=d.f;
               ds.Unionbyrank(d.s.f,d.s.s);
           }
       }
       
       return mstsum;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends