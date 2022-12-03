//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool ok(int mid, vector<int>&a, int n, int k)
    {
        int cows=1, pre=a[0];
        for(int i=1; i<n; i++)
        {
            if(a[i]-pre>=mid)
            {
                cows++;
                pre=a[i];
            }
        }
        
        if(cows>=k) return true;
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
       sort(stalls.begin(),stalls.end());
       int low=1, high=1000000000;
       int ans=1;
       while(low<=high)
       {
           int mid=(low+high)/2;
           if(ok(mid,stalls,n,k))
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