class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
      set<pair<int,int>> s;
        for(int i=0; i<mat.size(); i++)
        {
            int cnt=count(mat[i].begin(),mat[i].end(),1);
            s.insert({cnt,i});
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