class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int p=nums[mid];
            if(p==target) return mid;
            else if(p<target) low=mid+1;
            else high=mid-1;
        }
        
        return -1;
    }
};