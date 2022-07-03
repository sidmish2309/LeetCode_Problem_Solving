// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
   int cnt=0;
   
   void dfs(int node,  vector<int>A[ ], int d)
   {
       if(node==d)
       cnt++;
       for(auto child:A[node])
       dfs(child,A,d);
   }
   
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	   vector<int>A[n]; // Array of vectors
	   for(int i=0; i<edges.size(); i++)
	   {
	       int u=edges[i][0];
	       int v=edges[i][1];
	       A[u].push_back(v);
	   }
	  
	  dfs(s,A,d);
	  return cnt;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends