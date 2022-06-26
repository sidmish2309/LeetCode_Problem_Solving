class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
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
        int p=max(min_index,max_index) +1;
        int q=n-min(min_index,max_index);
        int r=n-(abs(min_index-max_index)-1);
        // cout<<min_index<<" "<<max_index<<endl;
        // cout<<p<<" "<<q<<" "<<r<<endl;
        
        return min({p,q,r});
    }
};