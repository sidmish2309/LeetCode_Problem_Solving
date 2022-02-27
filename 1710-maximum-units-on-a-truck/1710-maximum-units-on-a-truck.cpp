// fractional Knapsack type ques

bool comp(vector<int>&a, vector<int>&b) //sort by numberOfUnitsPerBox
    {
     return a[1]<b[1];   
    }
class Solution {
public:
    
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),comp);
        int size=0, ans=0, rem, count=0;
        for(int i=boxTypes.size()-1; i>=0; i--)
        {
            size+=boxTypes[i][0];
                if(size<=truckSize)
                {
                    ans+=(boxTypes[i][0]*boxTypes[i][1]);
                    count+=boxTypes[i][0];
                }
                
            else
            {
                rem=(truckSize-count)*boxTypes[i][1];
                ans+=rem;
                break;
            }
            
                
        }
        
        return ans;
    }
};