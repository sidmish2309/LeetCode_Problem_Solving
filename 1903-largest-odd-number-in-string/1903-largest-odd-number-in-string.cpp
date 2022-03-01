#include<bits/stdc++.h>
class Solution {
public:
    string largestOddNumber(string num) {
      int last_odd_index=-1;
        int n=num.length();
        for(int i=0; i<n; i++)
        {
            if((num[i]-'0')&1)
                last_odd_index=i;
        }
        
        
        return num.substr(0,last_odd_index+1);  //coz that is also a string
    }
};