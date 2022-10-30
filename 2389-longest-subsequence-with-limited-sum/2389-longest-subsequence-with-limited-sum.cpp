class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
       sort(nums.begin(),nums.end());
        vector<int> pre(nums.size(),0);
        pre[0]=nums[0];
        for(int i=1; i<nums.size(); i++) pre[i]=pre[i-1]+nums[i];
        vector<int> ans;
        for(auto x:queries)
        {
            int ub=upper_bound(pre.begin(),pre.end(),x)-pre.begin();
            
            ans.push_back(ub);
        }
        return ans;
    }
};