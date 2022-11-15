class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> targetIndex;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    targetIndex.push_back(i);
                    targetIndex.push_back(j);
                    return targetIndex;
                }
            }
        }
        return targetIndex;
    }
};