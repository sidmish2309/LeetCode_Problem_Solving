//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    
	vector<vector<int>>searchWord(vector<vector<char>>grid, string w){
	    int n=grid.size(), m=grid[0].size();
	    	vector<vector<int>> ans;
	    
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<m; j++)
	        {
	         int ci=i, cj=j;
              int h=0;
              string s1, s2, s3, s4, s5, s6, s7, s8;
              // up
              while(ci>=0) 
                {
                  s1+=grid[ci--][cj];
                  if(s1==w) h=1;
                }
              ci=i;
              //down
              while(ci<n) 
                {
                  s2+=grid[ci++][cj];
                   if(s2==w) h=1;
                }
              ci=i;
              //right
              while(cj<m) 
                {
                  s3+=grid[ci][cj++];
                   if(s3==w) h=1;
                }
              cj=j;
              //left
              while(cj>=0) 
                {
                  s4+=grid[ci][cj--];
                   if(s4==w) h=1;
                }
              cj=j;
              // upper left
              while(ci>=0 && cj>=0) 
                {
                  s5+=grid[ci][cj];
                   if(s5==w) h=1;
                  ci--;
                  cj--;
                }
              ci=i;
              cj=j;
              //upper right
              while(ci>=0 && cj<m) 
                {
                  s6+=grid[ci][cj];
                   if(s6==w) h=1;
                  ci--;
                  cj++;
                }
              ci=i;
              cj=j;
              //lower left
              while(ci<n && cj>=0) 
                {
                  s7+=grid[ci][cj];
                   if(s7==w) h=1;
                  ci++;
                  cj--;
                }
              ci=i;
              cj=j;
              //lower right
               while(ci<n && cj<m)
               {
                s8+=grid[ci][cj];
                 if(s8==w) h=1;
                ci++;
                cj++;
               } 
              ci=i;
              cj=j;
              
              if(h) ans.push_back({i,j});
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
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends