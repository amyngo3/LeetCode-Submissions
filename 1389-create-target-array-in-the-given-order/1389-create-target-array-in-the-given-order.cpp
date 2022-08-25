class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target(nums.size(), -1);
        
        for(int i = 0; i < nums.size(); i++){
            // if val is -1
            if(target.at(index[i]) == -1)
                target[index[i]] = nums[i];
            // if index has val
            else {
                // for loop to swap numbers
                // start from the index before the end to the index after i
                for(int j = index.size()-1; j > index[i]; j--)
                    target[j] = target[j-1];
                // insert current i index value
                target[index[i]] = nums[i];
            }
        }
        return target;
    }
};