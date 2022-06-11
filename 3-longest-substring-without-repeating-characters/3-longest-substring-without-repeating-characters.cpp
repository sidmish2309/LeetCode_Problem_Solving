class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        //sbstring-----> continuous string 
        //Look if we can use sliding window or hashmap or two pointer
        
        //Sliding Window
        // for keeping track of checking whether their is repeating character or not-->
        //using hashmap or character array
        
        //TC--->O(n), SC----> O(26)
        
       map<char,int>m;
          
        int ans=0;
        int i=0, j=0;
        while(j<n)
        {  
            
            m[s[j]]++;
            while(m[s[j]]>1)
            {
                m[s[i]]--;
                i++;
            }
            
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
        
        
    }
};