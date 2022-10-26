class Solution {
public:
    int smallestEvenMultiple(int n) {
        // if odd then return n * 2
        if(n % 2 == 1)
            return 2*n;
        // even number returns itself
        return n;
    }
};