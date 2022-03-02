class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
      
        int n=nums.size(), count=0, ans;
       
        for(int i=0; i<n; i++)
        {
            if(nums[i]<0)
            count++;
        }
        
         sort(nums.begin(),nums.end());
        if(k<=count)
        {
            for(int i=0; i<k; i++)
                nums[i]*=-1;
            
            ans=accumulate(nums.begin(),nums.end(),0);
        }
        
        else  // k>count
        {
            int rem=k-count;
           for(int i=0; i<count; i++)
               nums[i]*=-1;
            
            sort(nums.begin(),nums.end());
            
            if(rem%2==0)
            ans=accumulate(nums.begin(),nums.end(),0);
            else
            ans=accumulate(nums.begin()+1,nums.end(),0) -nums[0];
           
        }
        return ans;
    }
};