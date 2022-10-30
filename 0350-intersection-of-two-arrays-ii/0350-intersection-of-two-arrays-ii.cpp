class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         vector<int> ans;
       map<int,int> m;
        for(auto x:nums1) m[x]++;
        
        for(auto x:nums2)
        {
           if(m[x]>0)
           {
               m[x]--;
               ans.push_back(x);
           }
        }
        return ans;
    }
};