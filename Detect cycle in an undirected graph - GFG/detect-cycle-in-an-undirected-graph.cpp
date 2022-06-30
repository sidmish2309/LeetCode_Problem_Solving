// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool dfs(int node, vector<int> adj[], int vis[], int par)
    {
        vis[node]=1;
        for(auto child:adj[node])
        {
            if(!vis[child])
            {
                if(dfs(child,adj,vis,node)) return true;
            }
            
            // else if(vis[child]==1 && par==child) continue;
            else if(vis[child] && child!=par) return true;
            
        }
         return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        int vis[V]={0};
        for(int i=0; i<V; i++)
        {
            if(!vis[i])
            {
               if(dfs(i,adj,vis,-1)) return true; 
            }
            
        }
        
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends