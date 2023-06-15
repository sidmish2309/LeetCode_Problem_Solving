//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
  
  int largestareahistogram(vector<int> arr, int n)
{
   
    stack<int> s;
  
    s.push(-1);
    int area = arr[0];
    int i = 0;
   
    vector<int> left_smaller(n, -1), right_smaller(n, n);
    while (i < n) {
        while (!s.empty() && s.top() != -1
               && arr[s.top()] > arr[i]) {
           
            right_smaller[s.top()] = i;
            s.pop();
        }
        if (i > 0 && arr[i] == arr[i - 1]) {
           
            left_smaller[i] = left_smaller[i - 1];
        }
        else {
            
            left_smaller[i] = s.top();
        }
        s.push(i);
        i++;
    }
    for (int j = 0; j < n; j++) {
        
        area = max(area, arr[j]
                             * (right_smaller[j]
                                - left_smaller[j] - 1));
    }
    return area;
}


    int maxArea(int M[MAX][MAX], int n, int m) {
        
        vector<int> v;
        for(int i=0; i<m; i++) v.push_back(M[0][i]);
        int ans=largestareahistogram(v,m);
        
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(M[i][j]==0) v[j]=0;
                else v[j]++;
            }
            
            // for(auto d:v) cout<<d<<" ";
            // cout<<endl;
            ans=max(ans,largestareahistogram(v,m));
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends