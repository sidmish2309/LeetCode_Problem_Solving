class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int> pq; // max wala hai
       for(auto d:nums) pq.push(d);
    int p=k-1;
        // 1 2 3 4 5
        while(p--)
        {
            pq.pop();
        }
        
        return pq.top();
    }
};