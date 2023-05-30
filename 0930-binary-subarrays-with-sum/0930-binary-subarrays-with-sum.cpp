class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        map<int,int> m;
        m[0]=1;
        int pre=0, ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            pre+=nums[i];
            ans+=m[pre-goal];
            m[pre]++;
        }
        
        return ans;
    }
};