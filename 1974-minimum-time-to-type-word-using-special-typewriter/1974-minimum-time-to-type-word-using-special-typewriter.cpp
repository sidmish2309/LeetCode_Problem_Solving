class Solution {
public:
    int minTimeToType(string word) {
        char pointer='a';
        int ans=0;
        for(int i=0; i<word.length(); i++)
        {
           ans+=min(abs(word[i]-pointer), 26-abs((word[i]-pointer)));
            pointer=word[i];
        }
        return (ans+word.size());   // size of string is added to type the character(timing)
    }
};