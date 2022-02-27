class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(), cost.rend());
        int candy=0, ans=0;
        for(int i=0; i<cost.size(); i++)
        {
            if(candy!=2)
            {
                ans+=cost[i];
                candy++;
            }
            else
            {
                candy=0;
            }
        }
        
        return ans;
        
    }
};