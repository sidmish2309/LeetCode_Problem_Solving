//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
   
   bool okay(int dis, vector<int>&stalls, int k)
   {
       int c=1, pre=stalls[0];
       for(int i=1; i<stalls.size(); i++)
       {
           if(stalls[i]-pre>=dis)
           {
               c++;
               pre=stalls[i];
           }
       }
       
       return c>=k;
   }

    int solve(int n, int k, vector<int> &stalls) {
    sort(stalls.begin(),stalls.end());
    int ans, low=1, high=1e9;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(okay(mid,stalls,k))
        {
            ans=mid;
            low=mid+1;
        }
        
        else high=mid-1;
    }
    
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends