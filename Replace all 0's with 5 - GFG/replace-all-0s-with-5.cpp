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
    //  string p=to_string(n);
    //  for(int i=0; i<p.length(); i++)
    //  {
    //      if(p[i]=='0')
    //       p[i]='5';
    //  }
     
    //  n=stoi(p);
    //  return n;
    
    int pos=0;
    int ans=0;
    while(n!=0)
    {
        int rem=n%10;
        if(rem==0)
        rem=5;
        ans+=rem*pow(10,pos);
        n/=10;
        pos++;
    }
    return ans;
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