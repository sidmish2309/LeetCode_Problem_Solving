class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        
       if(lb==nums.size()) return -1;
        if(nums[lb]!=target) return -1;
        return lb;
    }
};