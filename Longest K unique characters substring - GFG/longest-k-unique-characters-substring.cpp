//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:

    int longestKSubstr(string nums, int k) {
         int longest=-1, i=0, j=0;
         map<char,int> m;
         while(j<nums.length())
         {
             m[nums[j]]++;
             while(m.size()>k)
             {
                 m[nums[i]]--;
                 if(m[nums[i]]==0) m.erase(nums[i]);
                 i++;
             }
             if(m.size()==k) longest=max(longest,j-i+1);
             ++j;
         }
         return longest;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends