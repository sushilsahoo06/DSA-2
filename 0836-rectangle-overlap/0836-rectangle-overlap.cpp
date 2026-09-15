class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        // Check if either rectangle is actually a line (zero area)
        if (rec1[0] == rec1[2] || rec1[1] == rec1[3] ||
            rec2[0] == rec2[2] || rec2[1] == rec2[3]) {
            return false;
        }

        // Check if they DO NOT overlap
        // rec1 is left of rec2 OR rec1 is right of rec2
        // rec1 is below rec2 OR rec1 is above rec2
        if (rec1[2] <= rec2[0] || rec1[0] >= rec2[2] || 
            rec1[3] <= rec2[1] || rec1[1] >= rec2[3]) {
            return false;
        }
        
        // If they aren't separated, they must overlap
        return true;
    }
};