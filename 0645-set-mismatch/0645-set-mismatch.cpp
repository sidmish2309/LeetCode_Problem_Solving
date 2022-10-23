class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int> m;
        vector<int> v;
       for(auto x:nums)
           m[x]++;
        
        for(auto x:m)
        {
            if(x.second==2) v.push_back(x.first);
        }
        
        for(int i=1; i<=nums.size(); i++) if(!m.count(i)) v.push_back(i);
        
        return v;
    }
};