class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<int> A[n+2]; // adjacency list
        for(auto child:edges)
        {
            int u=child[0];
            int v=child[1];
            A[u].push_back(v);
            A[v].push_back(u);
        }
        
        int ans=-1; // -1
        for(int i=0; i<n+2; i++)
        {
            int p=A[i].size();
            if(p>1)
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};