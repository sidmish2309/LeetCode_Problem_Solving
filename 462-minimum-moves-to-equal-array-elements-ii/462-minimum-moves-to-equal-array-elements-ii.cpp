class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        // We will convert all the elements equal to the median of the array...(after sorting)...this will give
        //minimum no. of operations.
        sort(nums.begin(),nums.end());
        
        int mid=(nums.size()-1)/2;
        int ans=0;
        for(int i=0; i<nums.size(); i++)
        ans+=abs(nums[i]-nums[mid]);
        
        return ans;
    }
};