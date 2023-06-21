#define pii pair<int,int>
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       priority_queue<pair<double,pii>, vector<pair<double,pii>>, greater<pair<double,pii>> > pq;
       
        vector<vector<int>> ans;
     for(auto d:points)
     {
         int x=d[0], y=d[1];
         double dis=(double) sqrt(pow(x,2)+pow(y,2));
         pq.push({dis,{x,y}});
     }
        
        while(k--)
        {
            
            ans.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }
        
        return ans;
    }
};