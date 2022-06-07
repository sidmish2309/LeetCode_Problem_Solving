class Solution {
public:
    void sortColors(vector<int>& nums) {
       int z=count(nums.begin(), nums.end(), 0);
        int o=count(nums.begin(), nums.end(), 1);
        int t=nums.size()-z-o;
        
        vector<int> v;
        while(z--)
            v.push_back(0);
        while(o--)
            v.push_back(1);
        while(t--)
            v.push_back(2);
        
        for(int i=0; i<nums.size(); i++)
            nums[i]=v[i];
        
        for(int i=0; i<nums.size(); i++)
            cout<<nums[i]<<" ";
        
    }
};