// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        int sum1 = accumulate(A,A+n,0);
        int sum2 = accumulate(B,B+m,0);
      
        if((sum1+sum2)&1) return -1;
          int equal=(sum1+sum2)/2;
        map<int,int>mp;
        for(int i=0; i<m; i++)
        mp[B[i]]=1;
        // cout<<equal<<endl;
        for(int i=0; i<n; i++)
        {
            int curr=sum1-A[i];
            if(mp[equal-curr]==1)
            return 1;
        }
        return -1;
        
	}
 

};

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}





  // } Driver Code Ends