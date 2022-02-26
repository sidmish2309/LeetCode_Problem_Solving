class Solution {
public:
    int maximum69Number (int num) {
        vector<int>v;
        int pos=1;
        int ans=0;
        while(num>0)
        {
           int temp=(num)%10;
            v.push_back(temp);
            num/=10;
            pos*=10;
        }

        reverse(v.begin(),v.end());
        
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]==6)
            {
                v[i]=9;
                break;
            }
        }
        
        int p=1;
        for(int i=v.size()-1; i>=0; i--)
        {
            ans+=(v[i])*p;
            p*=10;
        }
        return ans;
    }
};