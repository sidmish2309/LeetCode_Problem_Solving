// fractional Knapsack type ques

bool comp(vector<int>&a, vector<int>&b) //sort by numberOfUnitsPerBox
    {
     return a[1]<b[1];   
    }
class Solution {
public:
    
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
       //so, what we will do is--> we will sort the boxTypes on the basis of number of boxes......as its kinda a fractional knapsack prblm.
        int ans=0, boxes=0;
        sort(boxTypes.rbegin(),boxTypes.rend(),comp) ; // in reverse order
           for(auto x:boxTypes)
           {
               if(boxes+x[0]<=truckSize)
               {
                   boxes+=x[0];
                   ans+=(x[0]*x[1]);
               }
               else
               {
                   if(boxes==truckSize) break;
                   int remain=truckSize-boxes;
                   ans+=(remain*x[1]);
                   boxes+=remain;
               }
           }
        return ans;
    }
};