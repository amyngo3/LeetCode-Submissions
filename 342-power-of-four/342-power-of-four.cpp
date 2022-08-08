class Solution {
public:
    bool helper(int n, int power){
        // base case
        // if n < 4^power then return false
        if(n < pow(4, power))
            return false;
        // operation
        // if n == 4^power then return true
        if(n == pow(4, power))
            return true;
        // else call recursion
        else
            // recursive call
            return helper(n, power + 1);
    }
    bool isPowerOfFour(int n) {
        int power = 0;
        return helper(n, power);
    }
};