// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
       sort(arr,arr+n);
       long long s1=0, s2=0;
       int i=0; 
       while(i<n)
       {
           s1*=10;
           s1+=arr[i];
           i++;
           if(i==n) continue;
           s2*=10;
           s2+=arr[i];
           i++;
           
       }
       return s1+s2;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends