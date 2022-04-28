class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
      int n=jewels.length();
        int ans=0;
        for(int i=0; i<n; i++)
        {
            int p=count(stones.begin(), stones.end(), jewels[i]);
            ans+=p;
        }
        return ans;
    }
};