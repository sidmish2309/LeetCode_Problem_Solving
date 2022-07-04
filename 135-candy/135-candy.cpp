class Solution {
public:
    int candy(vector<int>& ratings) {
        //The basic idea is we will give each child '1' candy in starting
        // Now we will look greedily where we have to give more candies.
        
        //and the basic idea for this is--> first we will go from left to right and then
        // go from right to left---> and give more candy to child with higher rating than its neighbour.
        
        int n=ratings.size();
        vector<int>ans(n,1);
        for(int i=1; i<n; i++) // L to R
        {
            if(ratings[i]>ratings[i-1] && ans[i]<=ans[i-1])
                ans[i]=ans[i-1]+1;
        }
        
        for(int i=n-2; i>=0; i--) // R to L
        {
            if(ratings[i]>ratings[i+1] && ans[i]<=ans[i+1])
                ans[i]=ans[i+1]+1;
        }
        
        int total=accumulate(ans.begin(),ans.end(),0);
        return total;
        
        
    }
};