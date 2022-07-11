// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    #define pii pair<int,int>
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> A[], int S)
    {
        priority_queue<pii,vector<pii>,greater<pii>>pq;
        vector<int> dist(V+1,1e9+7);
        dist[S]=0;
        pq.push({0,S});
        while(!pq.empty())
        {
            int dis=pq.top().first;
            int prev=pq.top().second;
            pq.pop();
            for(auto child:A[prev])
            {
                int next=child[0];
                int nextDist=child[1];
                if(dist[next]>dist[prev]+nextDist)
                {
                   dist[next]=dist[prev]+nextDist;
                   pq.push({dist[next],next});
                }
                
            }
        }
        return dist;
        
    }
};


// { Driver Code Starts.


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