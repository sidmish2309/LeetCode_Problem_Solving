// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        sort(A,A+N);
        long long pre[N];
        pre[0]=A[0];
        for(long long i=1; i<N; i++)
        pre[i]=pre[i-1]+A[i];
        // 4 8 10 12 14 20 22
//             #        #
       // 4 12 22 34 48 68 90
        long long ans=pre[K2-2]-pre[K1-1];
        return ans;
    
        
    }
};

// { Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}
  // } Driver Code Ends