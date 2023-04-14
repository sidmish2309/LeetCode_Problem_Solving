class Solution {
public:
    
    int bs(vector<int>& nums, int low, int high, int target)
    {
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        
        return -1;
    }
    
    
    int search(vector<int>& nums, int target) {
     int index=-1, val=1000000;
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i]<val)
        {
            val=nums[i];
            index=i;
        }
    }
        
        int x=bs(nums,0,index-1, target);
        int y=bs(nums,index,nums.size()-1,target);
        if(x>=0) return x;
        if(y>=0) return y;
        return -1;
        
    }
};