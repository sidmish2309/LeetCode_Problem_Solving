class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        int a=num%10;
        int b=(num/10)%10;
        int c=(num/100)%10;
        int d=(num/1000)%10;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);
        sort(v.begin(),v.end());
        int x=(v[0]*10)+v[3];
        int y=(v[1]*10)+v[2];
        return x+y;
        
    }
};