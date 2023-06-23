class Solution {
public:
    int maxProfit(vector<int>& a) {
       int ans=0, mini=1e9;
        for(int i=0; i<a.size(); i++)
        {
            ans=max(a[i]-mini,ans);
            mini=min(mini,a[i]);
        }
        
        return ans;
    }
};