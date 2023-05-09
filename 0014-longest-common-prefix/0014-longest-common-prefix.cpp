class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string ans, check=strs[0], p;
        
      for(int i=0; i<check.size(); i++)
      {
          p+=check[i];
          int f=1;
          for(int j=1; j<strs.size(); j++)
          {
              string k=strs[j].substr(0,p.size());
              if(k!=p) f=0; 
          }
          if(f) ans=p;
          else break;
      }
        
        return ans;
    }
};