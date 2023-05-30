class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0, j=0, ans=0;
        map<int,int> type;
        while(j<fruits.size())
        {
            type[fruits[j]]++;
            while(type.size()>2) 
            {
                type[fruits[i]]--;
                if(type[fruits[i]]==0) type.erase(fruits[i]);
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        
        return ans;
    }
};