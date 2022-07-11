// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool bipartite_dfs(int node, vector<int>A[], int color[])
    {
        if(color[node]==-1) color[node]=1;
        for(auto child:A[node])
        {
            if(color[child]==-1)
            {
                color[child]=1-color[node];
                if(!bipartite_dfs(child,A,color)) return false;
            }
            
            else if(color[child]==color[node]) return false;
        }
        return true;
    }
	bool isBipartite(int V, vector<int>A[]){
	    int color[V];
	    memset(color,-1,sizeof(color));
	    for(int i=0; i<V; i++)
	    {
	        if(color[i]==-1)
	        {
	            if(!bipartite_dfs(i,A,color))
	            return false;
	        }
	    }
	    return true;
	    
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends