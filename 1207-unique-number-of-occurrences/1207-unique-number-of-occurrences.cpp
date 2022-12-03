class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<int> v;
        int c=1;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]==arr[i+1]) c++;
            else
            {
                v.push_back(c);
                c=1;
            }
        }
        
        v.push_back(c);
        sort(v.begin(),v.end());
        for(int i=0; i<v.size()-1; i++)
        {
            if(v[i]==v[i+1]) return false;
        }
        return true;
    }
};