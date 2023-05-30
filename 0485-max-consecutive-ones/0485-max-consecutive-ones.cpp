class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int o=0, ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==1) o++;
            else
            {
                ans=max(ans,o);
                o=0;
            }
        }
        ans=max(ans,o);
        return ans;
    }
};