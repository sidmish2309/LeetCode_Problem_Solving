// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
       int sbits_b=__builtin_popcount(b); //2
       int sbits_a=__builtin_popcount(a);
       if(sbits_a==sbits_b)
       return a;
       else if(sbits_b<sbits_a)
       {
           int p=0;
           for(int i=31; i>=0; i--)
           {
               if(sbits_b>0 && 1&(a>>i))
               {
                   p+=(1<<i);
                   sbits_b--;
               }
               
           }
           return p;
       }
       else
       {
           int q=a;
           sbits_b-=sbits_a;
           for(int i=0; i<32; i++)
           {
             if(sbits_b>0 && !(1&(a>>i)))
             {
                q+=(1<<i);  
                sbits_b--;
             }
              
           }
           
           return q;
           
       }
       
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}  // } Driver Code Ends