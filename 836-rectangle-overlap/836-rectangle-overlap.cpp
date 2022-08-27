class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        // corners or edges, no overlap
        // rec1 x1 to x2 and y1 to y2
        // rec2 x1 to x2 and y1 to y2
        // check if either rectangles sides touch the edges
        // or the sides are farther from touching sides
        if(rec1[0] >= rec2[2] ||    // rec1's left to rec2's right
           rec1[1] >= rec2[3] ||    // rec1's bottom to rec2's top
           rec1[2] <= rec2[0] ||    // rec1's right to rec2's left
           rec1[3] <= rec2[1])      // rec1's top to rec2's bottom
            return false;
        
        // overlap condition
        return true;
    }
};