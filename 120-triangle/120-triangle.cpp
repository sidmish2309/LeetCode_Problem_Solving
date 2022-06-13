class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        // Basically looking at the question the first approach I have in my mind is 
        // we can iterate over every row....from the first row and chose the minimum of two             //bottom elements i.e...// In the given example 1--> 
        //a[0][0]+ min(a[1][0],a[1][1]) +min(a[2][0],a[2][1]) + min(a[3][1],a[3][2])------------->(2+3+5+1)--->11 (here we r getting right answer)
        
        // But this will fail in case of negative elements...bcooz may be the path that we chose initially will give maximum answer than a different path at the end...
        
        //e.g----->    -1             //Here accn to us---->(-1+2+(-1))-->0
             //       2   3           // But actually min. ans is--->(-1+3+(-3))--->-1
          //        1  -1   -3  
// So, here come DP(bottom up approach)...came into existence for checking all possible paths.
    int n=triangle.size();                      
    vector<int> ans(triangle.back());  // v---> 4 1 8 3
        for(int i=n-2; i>=0; i--)
        {
            for(int j=0; j<triangle[i].size(); j++)
            {
                ans[j]=min(ans[j],ans[j+1]) + triangle[i][j];
            }
        }
        return ans[0];
    }
};