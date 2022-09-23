class Solution {
public:
    
    int concatenatedBinary(int n) {
        long long ans = 0, MOD = 1e9 + 7;
        
        // Observe my pen and paper that each time we are shifting the bits to the length of 
        // binary representation of i (left shift)--> also adding i and taking mod
        for (int i = 1; i <= n; i++) {
            int len_of_bits = log2(i) + 1;
            ans = ((ans << len_of_bits) % MOD + i) % MOD;
        }
        return ans;
        
    }
    
};