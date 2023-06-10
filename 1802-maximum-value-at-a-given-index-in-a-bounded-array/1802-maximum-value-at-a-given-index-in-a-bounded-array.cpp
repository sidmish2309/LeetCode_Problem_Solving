class Solution {
public:
    bool valid(int i, int index, int n, int maxi)
    {
        long long ele=i-1, R=n-index-1, L=index;
        long long left=0, right=0;
        // right sum
        if(R<=ele) right=(ele*(ele+1))/2 -((ele-R)*(ele-R+1))/2;
        else right=(ele*(ele+1))/2 + (R-ele);
        
        // left sum
        if(L<=ele) left=(ele*(ele+1))/2 -((ele-L)*(ele-L+1))/2;
        else left=(ele*(ele+1))/2 + (L-ele);
        
        if(left+right+i<=maxi) return true;
        else return false;
    }
    
    int maxValue(int n, int index, int maxSum) {
        int ans=0, low=1, high=maxSum;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(valid(mid,index,n, maxSum))
            {
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        
        return ans;
    }
};