class Solution {
public:
   int atmost(vector<int>& A, int S) {
    int i=0,j=0,cnt=0,sum=0;
       
    if (S < 0)return 0;
    
    while(j<A.size()){
        sum+=A[j];
        while(sum>S ) sum-=A[i++];
        
        cnt+=j-i+1;
        j++;
    }
    return cnt;
}
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums,goal)-atmost(nums,goal-1);
    }
};