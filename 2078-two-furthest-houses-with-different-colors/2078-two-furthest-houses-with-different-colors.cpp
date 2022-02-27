#include<bits/stdc++.h>
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int max1=0, max2=0, max3=0;
        
        int n=colors.size();
        if(colors[0]!=colors[n-1])  //starting and ending position
            max3=n-1;
        for(int i=1; i<=n-2; i++)
        {
            if(colors[0]!=colors[i])    // max distance of ith index from starting position
            {
                if(i>max1)
               max1=i; 
            }
                
            if(colors[n-1]!=colors[i])  // max distance of ith index from ending position
            {
                if(n-1-i>max2)
                max2=n-1-i;
            }
                
        }
        
        return max({max1,max2,max3});
    }
};