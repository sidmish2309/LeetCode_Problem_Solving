class Solution {
public:
    vector<vector<int>> generate(int n) {
//         1
//         1 1
//         1 2 1
//         1 3 3 1
//         1 4 6 4 1
            
            vector<vector<int>> ans(n);
            for(int i=0; i<n; i++)
            {
                if(i==0) 
                {
                    ans[i].push_back({1});
                    continue;
                }
                vector<int> v(i+1,1);
                for(int j=1; j<i; j++) v[j]=ans[i-1][j]+ans[i-1][j-1];
                ans[i]=v;
            }
        
        return ans;
    }
};