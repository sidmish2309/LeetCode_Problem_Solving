class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>m;
        for(auto x:edges)
        {
            m[x[0]]++;
            m[x[1]]++;
        }
        int p;
        for(auto x:m)
        {
            if(x.second>1)
            {
                p=x.first;
            }
          
        }
        return p;
    }
};