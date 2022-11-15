class Solution {
public:
    // nums = [1,1,3]
    // result = [1,3]
    int removeDuplicates(vector<int>& nums) {
        // if nums has only 1 int
        if(nums.size() == 1)
            return nums.size();
        
        // for loop nums
        for(int i = 0; i < nums.size() - 1; i++){
            // if current index is the same as the next index
            if(nums[i] == nums[i+1]){
                // while loop -- index less than vector size - 1 and same numbers as nums[i]
                while(i < nums.size() - 1 && nums[i] == nums[i+1]){
                    // erase number
                    nums.erase(nums.begin() + i + 1);
                }
            }
        }
        // return num size
        return nums.size();
    }
};