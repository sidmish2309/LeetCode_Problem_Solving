// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

 // } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
     string p=to_string(n);
     for(int i=0; i<p.length(); i++)
     {
         if(p[i]=='0')
          p[i]='5';
     }
     
     n=stoi(p);
     return n;
    }
    
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}  // } Driver Code Ends