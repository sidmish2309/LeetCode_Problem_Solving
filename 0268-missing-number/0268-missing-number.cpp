class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=accumulate(nums.begin(),nums.end(),0);
        return (((nums.size())*(nums.size()+1))>>1)- s;
    }
};