class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size(), m=matrix[0].size();
        vector<vector<int>> A(m,vector<int>(n,0));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                
                A[j][i]=matrix[i][j];
            }
        }
        return A;
    }
};