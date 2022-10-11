class Solution {
public:
    string convertToBase7(int num) {
       if(num==0) return "0";
        int p=abs(num);
        string ans;
        while(p>0)
        {
            int rem=p%7;
            p/=7;
            ans+=rem+'0';
        }
        
        if(num<0) ans+='-';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};