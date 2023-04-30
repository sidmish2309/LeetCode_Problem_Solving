class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        
        map<string,int> indegree;
        map<string,vector<string>> adj;
        
        
        for(int i=0; i<ingredients.size(); i++)
        {
            for(int j=0; j<ingredients[i].size(); j++)
            {
                indegree[recipes[i]]++;
                adj[ingredients[i][j]].push_back(recipes[i]);
            }
        }
        
        vector<string> ans;
        queue<string> q;
        for(int i=0; i<supplies.size(); i++) q.push(supplies[i]); // indegree==0
        
        while(!q.empty())
        {
            string d=q.front();
            q.pop();
            for(auto it:adj[d])
            {
                indegree[it]--;
                if(indegree[it]==0)
                {
                    q.push(it);
                    ans.push_back(it);
                }
            }
        }
        
        return ans;
        
    }
};