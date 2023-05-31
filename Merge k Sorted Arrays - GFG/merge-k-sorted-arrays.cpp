//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++
vector<int> merge(vector<int> a, vector<int> b)
{
    vector<int> ans;
    int i=0, j=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i]<b[j]) ans.push_back(a[i++]);
        else ans.push_back(b[j++]);
    }
    
    while(i<a.size()) ans.push_back(a[i++]);
    while(j<b.size()) ans.push_back(b[j++]);
    return ans;
}
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        
        if(arr.size()<=1) return arr[0];
        vector<int> ans=arr[0];
        for(int i=1; i<arr.size(); i++) ans=merge(ans,arr[i]);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}






// } Driver Code Ends