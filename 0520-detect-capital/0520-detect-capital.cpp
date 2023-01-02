class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        int small=0;
        for(int i=0; i<n; i++)
        {
            if(islower(word[i])) small++;
        }
        
        return small==n || small==0 || (small==n-1 && isupper(word[0]));
    }
};