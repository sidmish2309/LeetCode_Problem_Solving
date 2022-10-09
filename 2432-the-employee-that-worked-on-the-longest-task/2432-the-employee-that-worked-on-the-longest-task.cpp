class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        vector<pair<int,int>> v; //time, id
        int pre=0;
        for(auto x:logs)
        {
            v.push_back({x[1]-pre+1,x[0]});
            pre=x[1];
        }
        
        sort(v.rbegin(),v.rend());
        int time=v[0].first;
        cout<<time<<" ";
        int ans;
        for(auto x:v)
            if(x.first==time) ans=x.second;
        return ans;
    }
};