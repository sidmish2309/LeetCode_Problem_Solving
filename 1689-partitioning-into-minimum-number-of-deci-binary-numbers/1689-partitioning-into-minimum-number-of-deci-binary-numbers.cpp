class Solution {
public:
    int minPartitions(string n) {
        
        // Answer will be the maximum number---
        //e.g 
        //1.  32--->32-11=21
                    //21-11=10
                    //10-10=00
        
             //510--->510-110=400
                     //400-100=300
                     //300-100=200
                     //200-100=100
                     //100-100=000
        
        return *max_element(n.begin(),n.end())-'0';
        
    }
};