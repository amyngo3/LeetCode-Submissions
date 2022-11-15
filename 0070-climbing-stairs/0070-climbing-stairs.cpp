class Solution {
public:
    int climbStairs(int n) {
        // if 2 or less then return n
        if (n <= 2)
            return n;
        
        int prev = 1, cur = 2;
        // for loop from index 4 to n
        for(int i = 3; i <= n; i++){
            int res = prev + cur;
            prev = cur;
            cur = res;
        }
        return cur;
    }
};