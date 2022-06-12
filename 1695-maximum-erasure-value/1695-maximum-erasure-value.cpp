class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        // subarray having maximum sum and all unique elements
        //Sliding Window
        int i=0, j=0;
        long long curr_sum=0, maxi=0;
        map<long long, long long>m;
        while(j<nums.size())
        {
            m[nums[j]]++;
            curr_sum+=nums[j];
            
            while(i<j && m[nums[j]]>1)
            {
                m[nums[i]]--;
                curr_sum-=nums[i];
                i++;
                
            }
            j++;
            maxi=max(maxi,curr_sum);
        }
        return maxi;
    }
};