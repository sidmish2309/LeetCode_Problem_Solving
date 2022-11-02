class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        
        vector<int> ans;
       int row=grid.size(), col=grid[0].size();
        
        for(int j=0; j<col; j++)
        {
            int R=0, C=j;
           while(R<row && C<col)
           {
               if(grid[R][C]==1)
               {
                   if(C==col-1 || grid[R][C+1]==-1)
                   {
                       ans.push_back(-1);
                       break;
                   }
                   else C++;
               }
               
               else
               {
                   if(C==0 || grid[R][C-1]==1)
                   {
                       ans.push_back(-1);
                       break;
                   }
                   else C--;
               }
               R++;
               if(R==row) ans.push_back(C);
           }
        }
        return ans;
    }
};