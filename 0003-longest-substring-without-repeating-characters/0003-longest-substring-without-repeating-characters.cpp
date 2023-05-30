class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int maxi=0;
        map<char,int> mp;
       int i=0, j=0;
        while(j<s.length())
        {
            mp[s[j]]++;
            while(mp[s[j]]>1) mp[s[i++]]--;
            maxi=max(maxi,j-i+1);
            
            j++;
        }
        
        return maxi;
        
    }
};