#define ll long long
class Solution {
public:
  
    int reverse(int x) {
        bool f=false;
        
        
        if(x<0) f=true;
        x=abs(x);
        string p=to_string(x);
        std::reverse(p.begin(),p.end());
        long long ans=stoll(p);
        
        if(f) ans*=-1;
        cout<<ans<<endl;
         if(ans<INT_MIN || ans>INT_MAX) return 0;
        return ans;
    }
};