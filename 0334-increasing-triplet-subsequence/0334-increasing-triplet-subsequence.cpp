class Solution {
public:
    bool increasingTriplet(vector<int>& a) {
        // that the basic application of LIS
        //Using binary search
        vector<int> temp;
        temp.push_back(a[0]);
        
        for(int i=1; i<a.size(); i++)
        {
            if(a[i]> temp.back()) temp.push_back(a[i]);
            else
            {
                int ind=lower_bound(temp.begin(),temp.end(),a[i])-temp.begin();
                temp[ind]=a[i];
            }
        }
        
        if(temp.size()>=3) return true;
        return false;
    }
};