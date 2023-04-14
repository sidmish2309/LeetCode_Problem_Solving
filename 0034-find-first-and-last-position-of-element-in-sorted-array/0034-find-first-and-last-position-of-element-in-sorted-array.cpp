class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int f=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int l=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        l--;
        if(f<nums.size() && nums[f]==target) return {f,l};        
        return {-1,-1};
    }
};