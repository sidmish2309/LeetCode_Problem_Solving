class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        
        vector<int> v;
        for(auto x:queries) // 500
        {
            int x1=x[0], y1=x[1], r=x[2];
            int c=0;
            for(auto z:points) //500
            {
                int x2=z[0], y2=z[1];
                int d=pow((abs(x2-x1)),2) + pow((abs(y2-y1)),2);
                double p=(double) sqrt(d);
                if(p<=r) c++;
            }
            v.push_back(c);
        }
        return v;
    }
};