class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& a) {
        int n=a.size();
        vector<vector<int>> ans,v(501);
        
        // vector<int> set={};
        for(int i=0; i<n; i++)
        {
            v[a[i]].push_back(i);
            if(v[a[i]].size()==a[i])
            {
                ans.push_back(v[a[i]]);
                v[a[i]]={};
            }
        }
        
        
        return ans;
    }
};