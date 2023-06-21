//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int> dis(V+1,1e9);  // dis[i] represent ith node distance from S
        dis[S]=0;
        
      // {dis,node}
         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
         pq.push({0,S});
         
         while(!pq.empty())
         {
             int dist=pq.top().first;
             int node=pq.top().second;
             pq.pop();
             for(auto d:adj[node])
             {
                 int next_node=d[0];
                 int next_dis=d[1];
                 if(dis[next_node]>dis[node]+next_dis)  // mujhe orr chhoti distance mil rhii hai
                 {
                     dis[next_node]=dis[node]+next_dis;
                     pq.push({dis[next_node],next_node});
                 }
             }
             
         }
         return dis;
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
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends