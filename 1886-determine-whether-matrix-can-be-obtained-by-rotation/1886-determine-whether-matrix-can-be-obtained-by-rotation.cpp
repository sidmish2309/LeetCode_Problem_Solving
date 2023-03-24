class Solution {
public:
    bool findRotation(vector<vector<int>>& a, vector<vector<int>>& b) {
        int n=a.size();
        for(int i=0; i<4; i++)
        { 
             for(int x=0; x<n; x++)
            {
                for(int h=0; h<x; h++) swap(a[x][h],a[h][x]);
            }
            
            
            //
            for(int x=0; x<n; x++)
            {
                for(int h=0; h<n/2; h++) swap(a[x][h],a[x][n-h-1]);
            }
            
            if(a==b) return true;
        }
        
        return false; 
    }
};