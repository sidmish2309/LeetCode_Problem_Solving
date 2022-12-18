class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        
        //stack use
        int n=t.size();
        stack<pair<int,int>> s;
        vector<int> ans(n,0);
        s.push({t[n-1],n-1});
        for(int i=n-2; i>=0; i--)
        {
            while(!s.empty() && s.top().first<=t[i]) s.pop();
            if(!s.empty()) ans[i]=(s.top().second-i);
            s.push({t[i],i});
        }
        return ans;
    }
};