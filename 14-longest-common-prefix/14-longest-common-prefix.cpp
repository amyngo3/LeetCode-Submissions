class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // at least 1 word in vector
        // can have 0 to X letters in a word
        string result = "";
        
        // for loop of first word in vector
        for(int i = 0; i < strs[0].size(); i++){
            char letter = strs[0][i];
            // for loop of vector
            for(int j = 1; j < strs.size(); j++){
                // compare first word's letter(s) with other word(s)
                // if first word's letter is not equal to compared word's letter
                // or first word's letter index is greater than second word's length
                if(strs[j][i] != letter || i >= strs[j].size())
                    return result;
            }
            // add char to result
            result += letter;
        }
        
        return result;
    }
};