class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> dp(n, 0);

        // Base case: Subarray of length 1
        for (int i = 0; i < n; ++i) {
            dp[i] = nums[i];
        }

        // Build DP from subproblems of length 2 up to n
        for (int len = 2; len <= n; ++len) {
            for (int i = 0; i <= n - len; ++i) {
                int j = i + len - 1;
                dp[i] = std::max(nums[i] - dp[i + 1], nums[j] - dp[i]);
            }
        }

        return dp[0] >= 0;
    }
};