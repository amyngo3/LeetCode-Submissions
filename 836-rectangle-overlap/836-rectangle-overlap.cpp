class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        // corners or edges, no overlap
        // rec1 x1 to x2 and y1 to y2
        // rec2 x1 to x2 and y1 to y2
        // check if either rectangle is actually a line
        if(rec1[0] == rec1[2] || rec1[1] == rec1[3] ||
           rec2[0] == rec2[2] || rec2[1] == rec2[3])
            return false;
        
        // overlap condition
        // top - rec1 y >= rec2 y
        // right - rec1 x >= rec2 x
        // bottom - rec1 y <= rec2 y
        // left - rec1 x <= rec2 x
        return !(rec1[1] >= rec2[3] ||  // 0 - 3
                rec1[0] >= rec2[2] ||   // 0 - 3
                rec1[3] <= rec2[1] ||   // 2 - 1
                rec1[2] <= rec2[0]      // 2 - 1
               );
    }
};