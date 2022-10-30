class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
       int c1=count(nums.begin(),nums.end(),target);
        int c2=0;
        for(auto x:nums) c2+=(x<target);
        vector<int> ans;
        while(c1--) ans.push_back(c2++);
        return ans;
    }
};