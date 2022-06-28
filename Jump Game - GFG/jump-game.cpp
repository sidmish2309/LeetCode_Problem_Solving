// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int canReach(int A[], int N) {
       //Using here valley peak approach
       // finding the maximum reachability(index)...from a given index
       
       //reach=0
       //e.g--> [1 1 2 5 2 1 0 0 1 3]
    // index     0 1 2 3 4 5 6 7 8 9
    // reach-->  1 2 4 8 8 8 8 8 9 #(True)
    
    
       //e.g--> [1 1 2 3 2 1 0 0 1 3]
    // index     0 1 2 3 4 5 6 7 8 9
    // reach-->  1 2 4 6 6 6 6 x x x 9 #(False)
    
    int reach=0;
    for(int i=0; i<N; i++)
    {
        if(reach<i) return 0;
        reach=max(reach,i+A[i]);
    }
    return 1;
    
                
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}  // } Driver Code Ends