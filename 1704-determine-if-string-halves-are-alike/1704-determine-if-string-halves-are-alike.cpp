class Solution {
public:
    bool isvowel(char x)
{
  int p=int(x);
    if (x == 97 || x == 101 || x == 105 || x == 111 || x == 117 || x==65 || x==69 || x==73 || x==79 || x==85)
        return true;
    else
        return false;
}
    bool halvesAreAlike(string s) {
        int s1=0, s2=0;
        for(int i=0; i<s.length()/2; i++) if(isvowel(s[i])) s1++;
        for(int i=s.length()/2; i<s.length(); i++) if(isvowel(s[i])) s2++;
        if(s1!=s2) return false;
        return true;
        
    }
};