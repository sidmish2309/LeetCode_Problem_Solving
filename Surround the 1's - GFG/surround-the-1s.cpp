//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define ll long long
#define vpll vector<pair<ll,ll>>
class Solution {
public:
vpll dir8={{-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,0}, {0,1}, {1,-1}, {1,0}, {1,1}};

bool valid_index(ll i, ll j, ll n, ll m)
 {
  return (i>=0 && i<n && j>=0 && j<m);
 }


    int Count(vector<vector<int> >& matrix) {
        int n=matrix.size(), m=matrix[0].size();
        int ans=0;
       for(int i=0; i<n; i++)
       {
           for(int j=0; j<m; j++)
           {
               int c=0;
               for(auto d:dir8)
               {
                   int ni=i+d.first, nj=j+d.second;
                   if(matrix[i][j]==1 && valid_index(ni,nj,n,m) && matrix[ni][nj]==0) c++;
               }
               
               if(c%2==0 && c>0) ans++;
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
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends