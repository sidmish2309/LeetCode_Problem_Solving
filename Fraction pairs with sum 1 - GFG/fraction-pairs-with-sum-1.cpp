//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countFractions(int n, int N[], int D[])
    {
        int ans=0;
        map<pair<int,int>,int> m;
        for(int i=0; i<n; i++)
        {
            int g=__gcd(N[i], D[i]);
            int x=N[i]/g, y=D[i]/g;
            // cout<<x<<" "<<y<<endl;
            int rx=y-x, ry=y;
            int gr=__gcd(rx, ry);
            rx/=gr;
            ry/=gr;
            ans+=m[{rx,ry}];
            
            m[{x,y}]++;
        }
        
        // for(auto d:m) cout<<d.first.first<<" "<<d.first.second<<" "<<d.second<<endl;
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int numerator[n],denominator[n];
        for(int i=0;i<n;i++)
            cin>>numerator[i];
        for(int i=0;i<n;i++)
            cin>>denominator[i];
        Solution ob;
        int ans=ob.countFractions(n,numerator,denominator);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends