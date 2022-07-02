// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        long long sum=0;
        long long total=0;
        for(int i=0; i<n; i++)
        total+=a[i];
        if(total-a[0]==0)
        return 1;
        
        int ind=-1;
        for(int i=1; i<n; i++)
        {
            sum+=a[i-1];
            if(sum==total-sum-a[i])
            {
                ind=i+1;
                break;
            }
        }
        return ind;
        
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends