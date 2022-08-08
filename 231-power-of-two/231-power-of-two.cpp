class Solution {
public:
    bool helper(int n, int power){
        // base case
        // if n is lower than the power return false
        if(n < pow(2, power))
            return false;
        
        // operation
        // if n = 2^power return true
        if(n == pow(2, power))
            return true;
        else
            // recursive call
            return helper(n, power+1);
    }
    bool isPowerOfTwo(int n) {
        int power = 0;
        return helper(n, power);
    }
};