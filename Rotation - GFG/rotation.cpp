//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int nums[], int n) {
	     int mini=1000000;
    int low=0, high=n-1, rotate=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(nums[low]<=nums[mid])  // left part is sorted
        {
            if(nums[low]<mini)
            {
                mini=nums[low];
                rotate=low;
            }
            low=mid+1;
        }
        else  // right part is sorted
        {
             if(nums[mid]<mini)
            {
                mini=nums[mid];
                rotate=mid;
            }
             high=mid-1;
        }
    }
        
        return rotate;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends