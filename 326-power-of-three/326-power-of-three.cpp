class Solution {
public:
    bool helper(int n, int power){
        // base case
        if(n < pow(3, power))
            return false;
        
        // recursive call
        if(n == pow(3, power))
            return true;
        // operation
        else
            return helper(n, power + 1);
    }
    bool isPowerOfThree(int n) {
        int power = 0;
        return helper(n, power);
    }
};