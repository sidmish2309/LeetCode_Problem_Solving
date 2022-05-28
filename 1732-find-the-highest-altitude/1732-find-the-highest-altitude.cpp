class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
       int pre[n];
       pre[0]=gain[0];
        for(int i=1; i<n; i++)
        {
            pre[i]=pre[i-1]+gain[i];
        }
        
        sort(pre,pre+n);
        return max(0,pre[n-1]);
    }
};