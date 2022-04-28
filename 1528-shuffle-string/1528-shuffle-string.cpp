class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<pair<int,char>>v;
        int n=s.length();
        for(int i=0; i<n; i++)
        {
            v.push_back({indices[i], s[i]});
        }
        
        sort(v.begin(),v.end());
        string p="";
        for(auto x:v)
        {
            p+=x.second;
        }
        
        return p;
    }
};