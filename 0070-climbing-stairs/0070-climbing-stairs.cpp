class Solution {
public:
    int climbStairs(int n) {
        // if 2 or less then return n
        if (n <= 2)
            return n;
        
        // 1 stair for 1 step and 2 stairs for 2 steps
        int prev = 1, cur = 2;
        // for loop from index 3 to n to build number of possible steps of n
        for(int i = 3; i <= n; i++){
            int res = prev + cur;
            prev = cur;
            cur = res;
        }
        return cur;
    }
};