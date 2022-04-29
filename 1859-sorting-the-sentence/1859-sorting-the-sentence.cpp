class Solution {
public:
    string sortSentence(string s) {
        int n=s.length();
        int p=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]==' ')
                p++;
        }
       vector<string>v(p+1);
        string a="";
        for(int i=0; i<n; i++)
        {
            if(s[i]!=' ' && isdigit(s[i])==false)
                a+=s[i];
            else
            {
                if(isdigit(s[i])==true)
                {
                    int d=s[i]-'0';
                    int di=d-1;
                    v[di]=a;
                }
                a="";
            }
        }
        
        string ans="";
        
        for(int i=0; i<v.size()-1; i++)
        {
           ans+=v[i];
            ans+=' ';
        }
        
        ans+=v[v.size()-1];
        return ans;
    }
};