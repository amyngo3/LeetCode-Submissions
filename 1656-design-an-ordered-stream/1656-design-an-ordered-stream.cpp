class OrderedStream {
public:
    vector<string> stream;
    int ptr = 0;
    OrderedStream(int n) {
        // resize vector
        stream.resize(n);
    }
    
    vector<string> insert(int idKey, string value) {
        vector<string> result;
        stream[idKey-1] = value;
        
        // check if ptr is less than stream size and stream index of ptr is not empty
        while(ptr < stream.size() && !stream[ptr].empty()){
            // push value in result
            result.push_back(stream[ptr++]);
        }
        return result;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */