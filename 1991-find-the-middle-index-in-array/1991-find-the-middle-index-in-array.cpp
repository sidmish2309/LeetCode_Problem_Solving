class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int pre[n], suf[n];
        pre[0]=nums[0];
        suf[n-1]=nums[n-1];
        for(int i=1; i<n; i++)
            pre[i]=pre[i-1]+nums[i];
        for(int i=n-2; i>=0; i--)
            suf[i]=nums[i]+suf[i+1];
        
        if(n==1)
            return 0;
        for(int i=0; i<n; i++)
        {      
            if(i==0 && suf[1]==0)
            return 0;
                if(i>0 && i<n-1 && pre[i-1]==suf[i+1])
                 return i;     
            if(i==n-1 && pre[n-2]==0)
                return n-1;
        }
        
       return -1;
    }
};