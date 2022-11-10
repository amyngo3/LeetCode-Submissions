class Solution {
public:
    string decodeMessage(string key, string message) {
        // key to message map
        unordered_map<char, char> mp;
        // ascii 32 is space
        // map 32 to have the character space
        mp[32] = 32;
        
        // ascii number after lower case letter a
        char letter = 'a';
        
        // for loop key to fill in map
        for(int i = 0; i < key.size(); i++){
            // if char letter not in map yet (or at the end of map)
            if(mp.find(key[i]) == mp.end()){
                // insert letter in map value based on key index
                mp[key[i]] = letter;
                letter++;   // can increment letter for next letter
            }
        }
        
        // build answer based on message and map
        string result;
        
        // for loop message
        for(int i = 0; i < message.size(); i++)
            // build string based on message
            result.push_back(mp[message[i]]);
        
        return result;
    }
};