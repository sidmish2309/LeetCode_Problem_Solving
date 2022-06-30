class Solution {
public:
    vector<vector<int>>ans;
    void dfs(int node, vector<int>p, vector<vector<int>> &A, int dest)
    {
        p.push_back(node);
        if(node==dest)
        {
            ans.push_back(p);
            return;
        }
        for(auto child:A[node])
        dfs(child, p, A,dest);
            
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
       // we have already an adjacency list
        vector<int>p;
        dfs(0, p, graph,graph.size()-1);
        return ans;
    }
};