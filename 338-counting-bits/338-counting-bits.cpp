class Solution {
public:
    vector<int> countBits(int n) {
       vector<int> v;
        for(int i=0; i<=n; i++)
        {
            int x=i;
            int p=0;
            while(x!=0)
            {
                x=x&(x-1);
                p++;
            }
            v.push_back(p);
        }
        
        return v;
        
    }
};