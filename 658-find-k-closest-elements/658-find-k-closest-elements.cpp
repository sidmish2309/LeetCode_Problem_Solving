class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {
        vector<pair<int,int>> v;
        vector<int> ans;
        for(int i=0; i<a.size(); i++)
        {
            v.push_back({abs(a[i]-x),a[i]});
        }
        
        sort(v.begin(),v.end());
        for(int i=0; i<k; i++)
            ans.push_back(v[i].second);
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};