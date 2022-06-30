class Solution {
public:
    
    void dfs(int node, vector<vector<int>>& rooms, int vis[])
    {   
        vis[node]=1;
        for(auto child:rooms[node])
        {
            if(!vis[child])
            {
                dfs(child,rooms,vis);
            }
                
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int vis[rooms.size()];
        for(int i=0; i<rooms.size(); i++)
            vis[i]=0;
        dfs(0,rooms,vis);
        for(int i=0; i<rooms.size(); i++)
        {
            if(vis[i]==0)
                return false;
        }
        return true;
        
    }
};