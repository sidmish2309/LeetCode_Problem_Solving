class Solution {
public:
    vector<int> diStringMatch(string s) {
        int len=s.length();
        vector<int>v;
        int x=0, y=len;
        for(int i=0; i<len; i++)
        {
            if(s[i]=='I')
            {
                v.push_back(x);
                x++;
            }
            
            else
            {
                v.push_back(y);
                y--;
            }
        }
        v.push_back(x);
        return v;
    }
    
};