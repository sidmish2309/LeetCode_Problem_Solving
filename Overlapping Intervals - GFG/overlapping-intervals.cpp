//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& a) {
         sort(a.begin(),a.end());  
      vector<vector<int>> ans;
      for(int i=0; i<a.size(); i++)
      {
          if(ans.size()==0 || a[i][0]>ans.back()[1]) ans.push_back(a[i]);
          else
          {
              ans.back()[0]=min(ans.back()[0],a[i][0]);
              ans.back()[1]=max(ans.back()[1],a[i][1]);
          }
      }

      return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends