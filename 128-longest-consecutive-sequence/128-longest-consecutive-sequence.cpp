class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Since we have to find largest sequence...
        //We will use hashmap to check whether nums[i]-1 is present or not...
        //if(it is present)---> ignore
        // if not present than starting from that we will go forward and count the sequence.
        
        //e.g-->[100,4,200,1,3,2]
        //#curr =100
        //(100-1)---> not present, so check---> 100---> length=1;
        
        //#curr =4
        //(4-1)---> present---> ignore
       
        //#curr =200
        //(200-1)--->not present---> , count--> 200---> length=1;
        
         //#curr =1
        //(1-1)--->not present---> count-->1,2,3,4--> length=4;
        
         //#curr =3
        //(3-1)---> present---> ignore
        
         //#curr =2
        //(2-1)---> present---> ignore
        
        // so, answer----> max(1,1,4)-->4     // TC---> O(N), SC--> O(N).
        
        int n=nums.size();
        int max_len=0;
        unordered_map<int,int>m;
        for(int i=0; i<n; i++)
            m[nums[i]]=1;
        
        for(int i=0; i<n; i++)
        {
            int curr=nums[i];
            if(m[nums[i]-1]) continue;
            else
            {
                int start=curr;
                int cnt=0;
                while(m[start])
                {
                    cnt++;
                    start++;
                }
                max_len=max(max_len,cnt);
            }
        }
        
        return max_len;
        
    }
};