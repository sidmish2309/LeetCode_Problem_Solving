class Solution {
public:
    int cntt(string s)
    {
        int p=0;
        int n=s.length();
        for(int i=0; i<n; i++)
        {
           if(s[i]==' ')
               p++;
        }
        
        return p+1;
    }
    int mostWordsFound(vector<string>& sentences) {
        int maxi=-1;
        for(int i=0; i<sentences.size(); i++)
        {
            int k=cntt(sentences[i]);
            if(k>maxi)
                maxi=k;
        }
        return maxi;
    }
};