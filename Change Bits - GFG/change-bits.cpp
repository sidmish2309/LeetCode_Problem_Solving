// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> changeBits(int N) {
        // we have to find the most significant set bit
        //e.g---> 8(1000)--->3
        // new no. will be---> 15---> (2^(3+1))-1;
        //WAY-1
        // int mssb=log2(N);
        // mssb++;
        // int p=pow(2,mssb)-1;
        
        // WAY-2
        int cnt_leadzero=__builtin_clz(N);
        int mssb=32-cnt_leadzero; //4
        int p=(1<<mssb)-1;
        return {p-N,p};
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        auto ans = ob.changeBits(N);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends