class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        vector<int> ans;
        for(auto d:nums) m[d]++;
        
        priority_queue<pair<int,int>> pq;
        for(auto d:m) pq.push({d.second,d.first});
        
       
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};