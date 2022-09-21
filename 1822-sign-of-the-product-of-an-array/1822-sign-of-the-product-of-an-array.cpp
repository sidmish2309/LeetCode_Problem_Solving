class Solution {
public:
    int arraySign(vector<int>& nums) {
        map<int,int> m;
        int neg=0;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
          if(nums[i]<0) neg++;
        }
            
        if(m[0]>0) return 0;
        if(neg%2==0) return 1;
        else return -1;
        
        
    }
};