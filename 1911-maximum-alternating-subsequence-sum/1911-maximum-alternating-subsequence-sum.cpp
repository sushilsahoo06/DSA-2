class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        // dp[i][0]: max alternating sum ending with an even index (to be added)
        // dp[i][1]: max alternating sum ending with an odd index (to be subtracted)
        vector<vector<long long>> dp(n, vector<long long>(2, 0));
        
        dp[0][0] = nums[0]; // First element is always added
        dp[0][1] = 0;       // Cannot have an odd-length subsequence with only 1 element
        
        for (int i = 1; i < n; i++) {
        // If we choose nums[i] at an even position, we add it to the previous odd state
            dp[i][0] = max(dp[i - 1][1] + nums[i], dp[i - 1][0]);
            // If we choose nums[i] at an odd position, we subtract it from the previous even state
            dp[i][1] = max(dp[i - 1][0] - nums[i], dp[i - 1][1]);
        }
        
        return max(dp[n - 1][0], dp[n - 1][1]);
    }
};