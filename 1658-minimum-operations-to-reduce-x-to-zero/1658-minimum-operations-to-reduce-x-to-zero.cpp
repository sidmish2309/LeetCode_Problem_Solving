class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
     // since we have to find out the sum=x from the array... (minimum oper)
        // ultimately this means we have to find the target=array(sum)-x....(maximum oper)
        
    // i.e----> maximum subarray with sum==target
        // sliding window
       long long sum=accumulate(nums.begin(),nums.end(),0);
        long long target=sum-x;
        
        long long curr_sum=0;
        int ans=0;
        int i=0, j=0;
        while(j<nums.size())
        {
            curr_sum+=nums[j];
             while(i<j && curr_sum>target)  //first removing of elements will come
            {
                curr_sum-=nums[i++];
            }
            
            
            if(curr_sum==target)
            {
                ans=max(ans,j-i+1);  
            }
            
            j++;
          
        }
        
        if(sum==x) //edge case
            return nums.size();
        if(ans==0)
            return -1;
        else
            return nums.size()-ans;
        
    }
};