//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int A[], long long int N)  
    {
        long long x=0;
        for(int i=0; i<N; i++) x^=A[i];
        
        long long bit=log2(x& ~(x-1));
        long long a=0, b=0;
         for(int i=0; i<N; i++)
         {
             if((A[i]>>bit)&1) a^=A[i];
             else b^=A[i];
         }
        
        if(a<b) swap(a,b);
        return {a,b};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends