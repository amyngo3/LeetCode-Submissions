class Solution {
public:
    int minimumSum(int num) {
        vector<int> vec;
        // 2932
        // get single digits
        while(num){
            vec.push_back(num % 10);
            num /= 10;
        }
        // sort vec from lowest to highest
        sort(vec.begin(), vec.end());
        // lowest numbers, odd indices 0 and 1, multiplied by 10 plus even indices
        return vec[0] * 10 + vec[3] + vec[1] * 10 + vec[2];
    }
};