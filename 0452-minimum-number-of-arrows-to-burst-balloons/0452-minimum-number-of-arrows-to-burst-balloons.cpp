class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& v) {
        sort(v.begin(), v.end());
        vector < vector < int >> merged;


      int ans=1;
  int st=v[0][0], en=v[0][1];


 for(int i=1; i<v.size(); i++)
 {
   if(v[i][0]<=en)
   {
    st=max(st,v[i][0]);
    en=min(en,v[i][1]);
   }
   else
   {
    ans++;
    st=v[i][0];
    en=v[i][1];
   }
 }
        
        return ans;

    }
};