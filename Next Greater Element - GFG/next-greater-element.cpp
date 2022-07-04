// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        //STACK USE:-
        //Approach-1--> start from back of array---> remove smaller elements than
        //curr element from stack ....then ans[i]=top element of stack
        // and push--> this curr element into stack.
        vector<long long> ans(n,-1);
        stack<long long>s;
        for(int i=n-1; i>=0; i--)
        {
            while(!s.empty() && arr[i]>=s.top())
            s.pop();
            
                if(!s.empty()) ans[i]=s.top();
            
            s.push(arr[i]);
        }
        return ans;
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends