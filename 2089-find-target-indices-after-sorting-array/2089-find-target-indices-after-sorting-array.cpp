class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        int lower=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int upper=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        
        upper--;
        cout<<lower<<" "<<upper<<endl;
        if(lower>upper)
            return v;
        if(nums[lower]==target)
        {
            for(int i=lower; i<=upper; i++)
                v.push_back(i);
        }
        return v;
        
    }
};