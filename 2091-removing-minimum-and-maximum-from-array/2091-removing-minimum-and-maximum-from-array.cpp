class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        // we will find the indices of min and max element 
        // Now there are 3 possiblities
        //1. Delete both elements from left
        //2. Delete both elements from right
        //3. Delete from both side
        int min_index=-1, max_index=-1;
        int maxi=INT_MIN, mini=INT_MAX;
        for(int i=0; i<n; i++)
        {
            if(nums[i]>maxi)
            {
                maxi=nums[i];
                max_index=i;
            }
            
             if(nums[i]<mini)
            {
                mini=nums[i];
                min_index=i;
            }
        }
        int p=max(min_index,max_index) +1; //from left
        int q=n-min(min_index,max_index); // from right
        int r=n-(abs(min_index-max_index)-1); // from both side
        
        
        return min({p,q,r});
    }
};