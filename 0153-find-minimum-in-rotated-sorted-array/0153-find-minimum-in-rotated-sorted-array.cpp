class Solution {
public:
    int findMin(vector<int>& nums) {
     int mini=1000000;
    for(auto x:nums) mini=min(mini,x);
        return mini;
    }
};