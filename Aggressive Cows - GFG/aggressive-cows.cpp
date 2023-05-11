//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool ok(int mid, vector<int>& a, int k)  // 8
{
   int cow=1, pre=a[0];
   for(int i=1; i<a.size(); i++)
   {
       if(a[i]-pre>=mid)
       {
           cow++;
           pre=a[i];
       }
   }
   
   return cow>=k;
}

    int solve(int n, int k, vector<int> &a) {
        
        sort(a.begin(),a.end());
        int low=1, high=a[n-1]-a[0], ans=0;
        while(low<=high)
        {
            int mid=(low+high)>>1;
            if(ok(mid,a,k)) // me iss speed se ---> hr me kha paungaa
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