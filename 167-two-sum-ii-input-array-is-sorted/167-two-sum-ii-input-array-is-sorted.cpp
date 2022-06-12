class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // since array is SORTED.....we can use this as an advantage
        //using two pointers...and check for the desired sum
        vector<int> v=numbers;
        vector<int>ans;
        int n=v.size();
        int i=0, j=n-1;
        int curr_sum=0;
        while(i<j)
        {
            curr_sum=v[i]+v[j];
            if(curr_sum==target)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
            else if(curr_sum>target)
                j--;
            else
                i++;
        }
        return ans;
    }
};