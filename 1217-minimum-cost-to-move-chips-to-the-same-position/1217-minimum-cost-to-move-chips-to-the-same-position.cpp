class Solution {
public:
    // We will take all chips at even places together and similarly for odd places too
    int minCostToMoveChips(vector<int>& position) {
       int even=0, odd=0;
        for(int i=0; i<position.size(); i++)
        {
            if(position[i]&1)
                odd++;
            else
                even++;
        }
     return min(odd,even);   
    }
};