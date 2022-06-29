class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b){
        if(a[0]==b[0]) return a[1]<b[1];
        return a[0]>b[0];
    }
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        //(height of person, how may persons are on left of this person
        //e.g--> (6,1), (3,0), (4,2), (8,0)
        // ans-> (3,0), (8,0), (6,1), (4,2)
        
      // 1.Approach--> sorting on basis of height(decrease)
        
        sort(people.begin(),people.end(),comp);
        vector<vector<int>> ans;
        for(auto p:people)
        {  
            ans.insert(ans.begin() +p[1],p);
        }
        return ans;
        
        
        
        
        
    }
};