class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         vector<int> ans;
       map<int,int> m;
        for(auto x:nums1) m[x]++;
        
        for(auto x:nums2)
        {
            auto it=m.find(x);
            if(it!=m.end() && it->second>0)
            {
                ans.push_back(x);
                it->second--;
            }
        }
        return ans;
    }
};