class Solution {
public:
    bool pow2(int n, int i) {
        if(n<=0) return false;
       if(i>=32) return false; 
        if (n == (1 << i)) {
                return true;
            }
            
        return pow2(n, i+1);
    }

    bool isPowerOfTwo(int n) {
        return pow2(n,0);
        
    }
};