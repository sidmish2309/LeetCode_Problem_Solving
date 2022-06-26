class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        //As we have seen everytime number of cards drawn are fixed 
        //so what we can do....we can pick (i) cards from starting and
        //(k-i) cards from the end of all possibilities 
        //and can take the maximum.
        int n=cardPoints.size();
        int pre[n], suff[n];
        pre[0]=cardPoints[0];
        suff[n-1]=cardPoints[n-1];
        for(int i=n-2; i>=0; i--)
            suff[i]=suff[i+1]+cardPoints[i];
        for(int i=1; i<n; i++)
        pre[i]=pre[i-1]+cardPoints[i];
        
        int ans=INT_MIN;
        
        for(int i=0; i<=k; i++) //cards from left
        {
            int end=k-i; //cards from end
            int sum_start, sum_end;
            if(i==0)
                sum_start=0;
            else 
                sum_start=pre[i-1];
            if(i==k)
                sum_end=0;
            else
                sum_end=suff[n-end];
            // cout<<sum_start<<" "<<sum_end<<endl;
            
            ans=max(ans,sum_start+sum_end);
        }
         return ans;
    }
   
};