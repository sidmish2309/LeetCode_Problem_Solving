class Solution {
public:
    string frequencySort(string s) {
       int n=s.length();
        sort(s.begin(),s.end());
        vector<pair<int,char>> v;
        int c=1;
        for(int i=0; i<n-1; i++)
        {
            if(s[i]==s[i+1]) c++;
            else
            {
                v.push_back({c,s[i]});
                c=1;
            }
        }
        
        v.push_back({c,s[n-1]});
        sort(v.rbegin(),v.rend());
        
        for(auto x:v)
            cout<<x.first<<" "<<x.second<<endl;
        string ans;
            for(auto x:v)
            {
                int c=x.first;
                while(c--) ans+=x.second;
            }
        
        return ans;
    }
};