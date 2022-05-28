class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int k;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++)
        {
            if(nums[i]!=i)
            {
                k=i;
                break;
            }
        }
        return k;
    }
};