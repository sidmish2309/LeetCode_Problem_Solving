class Solution {
public:
    int vis[202002];
    vector<int> adj[202002];
    void dfs(int node)
    {
        vis[node]=1;
        for(auto x:adj[node])
        {
            if(!vis[x]) dfs(x);
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        for(auto x:edges)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
       dfs(source);
        if(vis[destination]==1) return true;
        return false;
    }
};