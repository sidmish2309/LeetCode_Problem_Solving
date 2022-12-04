#define ll long long
class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        ll n=nums.size();
        vector<ll> v(n,0);
        ll sum=0, mini=1000000;
        vector<ll> suff(n,0);
        suff[n-1]=nums[n-1];
        for(int i=n-2; i>=0; i--) suff[i]=suff[i+1]+nums[i];
        for(int i=0; i<n; i++)
        {
            ll x=0;
            sum+=nums[i];
            if(i<n-1) x=suff[i+1]/(n-i-1);
            ll y=sum/(i+1);
            ll p=abs(y-x);
            v[i]=p;
            mini=min(mini,p);
        }
        
        int ans;
        for(int i=0; i<n; i++)
        {
            if(v[i]==mini)
            {
                ans=i;
                break;
            }
        }
        
        return ans;
    }
};