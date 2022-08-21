class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false; 
        double x=(double)log2(n);
        if(ceil(x)==floor(x))
            return true;
        return false;
    }
};