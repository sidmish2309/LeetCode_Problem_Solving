//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
  int squaresum(int p)
  {
    int sum=0;
    while(p>0)
    {
        sum+=pow(p%10,2);
        p/=10;
    }
    
    return sum;
  }
    bool okay(int n)
    {
        int p=n;
        while(p>9)
        {
            p=squaresum(p);
        }
        
        if(p==1 || p==7) return true;
        return false;
    }
    int nextHappy(int N){
        for(int i=N+1; i<=100003; i++)
        {
            if(okay(i)) return i;
        }
        
        return -1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends