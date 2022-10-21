class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        //try sonme brute force
        int f=0;
        map<int,int> m;
        for(int i=0; i<nums.size(); i++)
        {
            if(m.count(nums[i]))
            {
                // if I have already seen this number, then check for condition abs(i - j) <= k
                if(abs(i-m[nums[i]])<=k)
                    return true;
            }
            m[nums[i]]=i;
            cout<<m[nums[i]]<<" ";
            
        }
        
        return false;
    }
};