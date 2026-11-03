class Solution {
public:
    vector<int>generateRow(int row){
        long long op=1;
        vector<int>ansRow;
        ansRow.push_back(1);
        for(int i=1;i<row;i++){
            op=op*(row-i);
            op=op/i;
            ansRow.push_back(op);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            vector<int>temp=generateRow(i);
            ans.push_back(temp);
        }
        return ans;
    }
};