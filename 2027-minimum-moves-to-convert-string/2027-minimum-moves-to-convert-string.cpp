class Solution {
public:
    int minimumMoves(string s) {
        int n=s.length();
        int ans=0;
        for(int i=0; i<n;)
        {
            if(s[i]=='X')
            {
                ans++;
                i+=3;
            }  
            
            else
                i++;
        }
        return ans;
    }
};