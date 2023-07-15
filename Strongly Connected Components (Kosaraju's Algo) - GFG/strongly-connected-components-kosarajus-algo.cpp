//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	//SCC---> In a SCC every pair of vertices is reachable to each other
    // Only valid in directed graphs

    //Kosaraju's Algo
    //---> We can reach SCC1-->SCC2-->SCC3-->SCC4
    // but if I reverse these edges I can't reach to adjacent SCC, so distinguish
    // SCC1<--SCC2<--SCC3<--SCC4
    // So, Reverse every edge
    //But the problem is how I know where to start bcoz is lets say
    // 0 is in SCC4 then again everyone will be visited?????


    //1. Sort all edges according to finishing time
    //2. Reverse the graph 
    //3. Do a DFS
    //Guy who is finished at the last from there we have to start
    
    //TC---> O(V+E) + O(V+E), O(V+E)
    //SC--->O(2*V)---> for stack + for vis array
    
    
    
	//Function to find number of strongly connected components in the graph.
	void dfs(int node, vector<int> &vis, vector<vector<int>>& adj, stack<int> &st)
	{
	    vis[node]=1;
	    for(auto d:adj[node])
	    {
	        if(!vis[d]) dfs(d,vis,adj,st);
	    }
	    
	    st.push(node);
	}
	
	void dfs3(int node, vector<int> &vis, vector<int> adjrev[])
	{
	    vis[node]=1;
	    for(auto d:adjrev[node])
	    {
	        if(!vis[d]) dfs3(d,vis,adjrev);
	    }
	    
	}
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        vector<int> vis(V,0);
        stack<int> st;  
        
        //1. Getting nodes in order of finishing time
        for(int i=0; i<V; i++) if(!vis[i]) dfs(i,vis,adj,st);
        
        //2. Reversing the graph
        vector<int> adjrev[V];
        for(int i=0; i<V; i++)
        {
            vis[i]=0;  // Setting again for step 3
            for(auto d:adj[i]) adjrev[d].push_back(i);
        }
        
        //3. again doing a DFS and counting SCC's
        int scc=0;
        while(!st.empty())
        {
            int node=st.top();
            st.pop();
            if(!vis[node]) 
            {
                scc++;
                dfs3(node,vis,adjrev);
            }
        }
        
       return scc;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends