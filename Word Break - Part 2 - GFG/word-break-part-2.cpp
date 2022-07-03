// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
map<string,int> m;
vector<string>ans;
void dfs(int ind, string &s, string &t)
{
    if(ind==s.size())
    {
        t.pop_back();
        ans.push_back(t);
    }
    for(int i=ind; i<s.size(); i++)
    {
        string curr=s.substr(ind,i-ind+1);
        string temp=t;
        if(m[curr])
        {
            t+=curr;
            t+=' ';
            dfs(i+1,s,t);
            t=temp;
        }
    }
}
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        for(auto x:dict)
        m[x]=1;
        string t="";
        dfs(0,s,t);
        return ans;
    }
    
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends