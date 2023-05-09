class Solution {
public:
    //"(()())"
    string removeOuterParentheses(string s) {
      string ans;
        int o=0, c=0, d=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='(') o++;
            else c++;
            if(o==c)
            {
               ans+=s.substr(d+1,i-d-1);
               d=i+1;
            }
        }
        
        return ans;
    }
};