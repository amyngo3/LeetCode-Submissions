class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> result;
        // letter-numbers to next letter-numbers
        // read s by letter then number s[0] and s[1] to s[3] and s[4]
        // convert initial char to ascii to reach final character
        
        // get the starting and final of letter and number
        int asciiInit = int(s[0]);
        int asciiFinal = int(s[3]);
        
        // same as int(s[1]) - 48 to get actual integer
        int initNum = s[1] - '0';
        int finalNum = s[4] - '0';
        
        // for loop init ascii letter to final ascii letter
        for(int i = asciiInit; i <= asciiFinal; i++){
            // for loop init number to final number
            for(int j = initNum; j <= finalNum; j++){
                string temp = char(i) + to_string(j);
                // push to result
                result.push_back(temp);
            }  
        }
        
        return result;
    }
};