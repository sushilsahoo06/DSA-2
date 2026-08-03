class Solution {
public:
    int t[23][23];

    int predictDiff(int i, int j, vector<int>& nums) {
        if (i == j) return nums[i];
        if (t[i][j] != -1) return t[i][j];

        // Score added by picking left/right minus what the opponent gets next
        int take_i = nums[i] - predictDiff(i + 1, j, nums);
        int take_j = nums[j] - predictDiff(i, j - 1, nums);

        return t[i][j] = max(take_i, take_j);
    }

    bool predictTheWinner(vector<int>& nums) {
        memset(t, -1, sizeof(t));
        return predictDiff(0, nums.size() - 1, nums) >= 0;
    }
};