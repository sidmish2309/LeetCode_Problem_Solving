class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string ans="";
        string p="";
       for(int i=0; i<n; i++)
       {
           if(s[i]!=' ') p+=s[i];
           else
           {
               reverse(p.begin(),p.end());
               ans+=p;
               ans+=' ';
               p="";
           }
       }
        reverse(p.begin(),p.end());
        ans+=p;
        
        return ans;
    }
};