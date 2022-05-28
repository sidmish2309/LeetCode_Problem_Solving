class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        int pre[n];
        pre[0]=nums[0];
        for(int i=1; i<n; i++)
            pre[i]=pre[i-1]+nums[i];
        sort(pre,pre+n);
        if(pre[0]>=1)
            return 1;
        else
        return 1-pre[0];
    }
};