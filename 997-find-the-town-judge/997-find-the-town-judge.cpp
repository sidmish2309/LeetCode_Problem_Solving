class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        //e.g-->1
        //n = 3, trust = [[1,3],[2,3],[3,1]]
        //1---> trusting 3---> so, 1 is not a town judge
        //2---> trusting 3---> so, 2 is not a town judge
        //3---> trusting 1---> so, 3 is not a town judge
        //Hence, ans-->-1 
        
        //e.g-->2
        //n = 3, trust = [[1,3],[2,3]]
        // here, 1 & 2 can't be town judge
        // also, everyone is trusting 3
        //Hence, ans-->3
        
         //e.g-->3
         // n = 2, trust = [[1,2]]
        // here, 1 can't be town judge
        // also, everyone is trusting 2
        //Hence, ans-->2
        
        //e.g-->4
         // n = 3, trust = [[1,3]]
        // here, 1 can't be town judge
        // also, 2 & 3 can't be town judge---> coz, everyone is           not trusting them
        //Hence, ans-->-1
        
        //Logic--> JUDGE ki indegree=n-1 & outdegree=0
        
        pair<int,int>a[n+1];  //(indegree, outdegree)
        
        for(auto x:trust)
        {
            a[x[0]].second++;
            a[x[1]].first++;
        }
        
        int ans=-1;
        for(int i=0; i<n+1; i++)
        {
           if(a[i].first==n-1 && a[i].second==0)
           {
               ans=i;
               break;
           }
        }
        
        if(n==1)
            return 1;
        else if(ans==-1)
            return -1;
        else
            return ans;
        
    }
};