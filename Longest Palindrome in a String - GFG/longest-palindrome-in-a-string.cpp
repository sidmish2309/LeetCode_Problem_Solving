//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        int len=1, n=s.length(), st=-1, en=-1;
        
        for(int i=0; i<n; i++)  // considering ith element as mid 
        {
            int c=1;
            int j=i-1, k=i+1;
            while(j>=0 && k<n && s[j]==s[k]) 
            {
                c+=2;
                j--;
                k++;
            }
            if(c>len)
            {
                len=c;
                st=j+1;
                en=k-1;
            }
        }
        
        // cout<<st<<" "<<en<<endl;
        for(int i=0; i<n; i++) // considering ith element as left of mid
        {
           int c=0;
           int j=i, k=i+1;
           while(j>=0 && k<n && s[j]==s[k]) 
            {
                c+=2;
                j--;
                k++;
            }
            if(c>len)
            {
                len=c;
                st=j+1;
                en=k-1;
            }
        }
        
        
        if(len==1) return s.substr(0,1);
        return s.substr(st,len);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends