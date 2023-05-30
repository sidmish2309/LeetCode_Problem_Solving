class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        map<int,int> mp;
        int i=0, j=0, ans=0;
        while(j<nums.size())
        {
            mp[nums[j]]++;
            while(mp[0]>k) mp[nums[i++]]--;
            // cout<<i<<" "<<j<<" "<<"len="<<j-i+1<<endl;
            ans=max(ans,j-i+1);
            j++;
        }
        
        return ans;
    }
};