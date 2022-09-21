class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0;
        for(int i=0; i<nums.size(); i++)
            if(nums[i]%2==0) sum+=nums[i];
        
        vector<int> ans;
        for(auto x:queries)
        {
            int ind=x[1];
            int val=x[0];
            if(nums[ind]&1)
            {
                if(val&1) 
                {
                    sum+=nums[ind]+val;
                }
                
                
            }
            
            else
            {
                if(val%2==0) 
                {
                   sum+=val; 
                }   
                else
                {
                    sum-=nums[ind];
                }
            }
            nums[ind]+=val;
            ans.push_back(sum);
            
        }
        return ans;
    }
};