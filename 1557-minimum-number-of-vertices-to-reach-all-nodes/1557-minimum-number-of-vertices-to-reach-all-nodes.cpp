class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        // Approach-1--> We will find all the nodes
        //having indegree as zero---> bcoz those r the only nodes that are reachable from itself.
        
        int indegree[n];
        for(int i=0; i<n; i++)
            indegree[i]=0;
        for(auto x:edges)
        indegree[x[1]]++;
        
        vector<int> v;
        int i=0;
        // for(auto x:indegree)
        //     cout<<x<<" ";
        for(auto x:indegree)
        {
            if(x==0)
            {
                v.push_back(i);
            }
            i++;
        }
        
        return v;
        
        
    }
};