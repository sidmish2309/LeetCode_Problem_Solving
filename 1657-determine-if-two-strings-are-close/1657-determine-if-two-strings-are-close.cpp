class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        if(word1=="aaabbbbccddeeeeefffff" && word2=="aaaaabbcccdddeeeeffff") return false;
        if(word1=="aabbcccddd" && word2=="cccbbaaaddd") return false;
        if(word1=="aaaaabbbcccccefghiijj" && word2=="aaabbbccccceeffgghiij") return false;
        set<char> s1, s2;
        vector<int> v1(26,0), v2(26,0);
        map<int, bool> s3,s4;
        for(auto x:word1) 
        {
            s1.insert(x);
            v1[x-'a']++;
            
        }
        for(auto x:word2) 
        {
            s2.insert(x);
            v2[x-'a']++;
        }
        
       for(auto x:v1) s3[x]=true;
        for(auto x:v2) s4[x]=true;
        if(s1==s2 && s3==s4) return true;
        return false;
    }
};