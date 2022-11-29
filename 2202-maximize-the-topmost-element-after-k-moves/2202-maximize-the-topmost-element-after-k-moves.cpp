class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());
        int p=0;
       
        if(k&1 && n==1) return -1;
        if(k==1) return nums[1];
        if(k>n) return maxi;
        for(int i=0; i<k-1; i++) p=max(p,nums[i]);
        if(k==n) return p;
        else
        return max(p,nums[k]);
        
    }
};