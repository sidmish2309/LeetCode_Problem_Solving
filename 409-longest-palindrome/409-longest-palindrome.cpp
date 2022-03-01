class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.length();
        map<char,int>m;
        int pairs=0, singles=0;
        for(int i=0; i<n; i++)
        {
            m[s[i]]++;
        }
        
        for(auto x:m)
        {
            if((x.second)%2==0)
                pairs+=(x.second)/2;
            else
            {
                pairs+=(x.second-1)/2;
                singles++;
            }
        }
        if(singles>0)
        return 2*pairs+1;
        else
        return 2*pairs;
    }
};