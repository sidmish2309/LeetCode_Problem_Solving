class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=lower_bound(nums.begin(),nums.end(),target)-nums.begin();\
        // 2 4 5 6
        if(l<nums.size() && nums[l]==target) return l;
        return -1;
    }
};