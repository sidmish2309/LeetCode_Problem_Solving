class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
      set<pair<int,int>> s;
        for(int i=0; i<mat.size(); i++)
        {
            int ub=upper_bound(mat[i].rbegin(),mat[i].rend(),1)-mat[i].rbegin();
            int lb=lower_bound(mat[i].rbegin(),mat[i].rend(),1)-mat[i].rbegin();
            
            s.insert({ub-lb,i});
        }
        
        vector<int> ans;
        
        int p=0;
        for(auto x:s)
        {
            p++;
            if(p>k) break;
            ans.push_back(x.second);
            
        }
        return ans;
    }
};