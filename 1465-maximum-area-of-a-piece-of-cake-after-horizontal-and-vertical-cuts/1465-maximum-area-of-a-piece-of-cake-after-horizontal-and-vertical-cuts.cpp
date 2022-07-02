class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int m=1e9+7;
        // we have to find the maximum diffeerence in cuts in case of both hoorizontal and vertical;
        horizontalCuts.push_back(0);
        verticalCuts.push_back(0);
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        int diff1=0, diff2=0;
        
        for(int i=1; i<horizontalCuts.size(); i++)
            diff1=max(diff1,horizontalCuts[i]-horizontalCuts[i-1])%m;

        
        for(int i=1; i<verticalCuts.size(); i++)
            diff2=max(diff2,verticalCuts[i]-verticalCuts[i-1])%m;
        
        long long d1,d2;
        d1=diff1;
        d2=diff2;
        return (d1*d2)%m;
        
    }
};