class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
     map<int,int> m1;
        for(auto x:nums) m1[x]++;
        vector<int> v;
        for(auto x:m1) if(x.second==2) v.push_back(x.first);
        
        return v;
    }
};