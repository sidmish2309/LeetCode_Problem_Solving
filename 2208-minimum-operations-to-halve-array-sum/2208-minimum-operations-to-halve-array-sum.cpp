class Solution {
public:
    int halveArray(vector<int>& nums) {
         vector<double> v;
        
        for(int i=0; i<nums.size(); i++)
        {
            double x=(double)nums[i];
            v.push_back(x);
        }
        sort(v.rbegin(),v.rend());

        double total=0, sum=0;
        for(int i=0; i<v.size(); i++)
        {
            total+=v[i];
            sum+=v[i];
        }
        
        total=total/2;
        int oper=0;
       priority_queue<double>pq;
       for(int i=0; i<v.size(); i++)
       {
        pq.push(v[i]);
       }

       while(1)
       {
        double highest=pq.top();
        pq.pop();
        highest/=2;
        oper++;
        sum-=highest;
        if(sum<=total)
        {
          break;
        }
        pq.push(highest);
       }
        return oper;
    }
};