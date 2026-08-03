class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();
        // dp[i] stores the max score difference (Current Player - Opponent) starting from index i
        std::vector<int> dp(n + 1, 0);

        for (int i = n - 1; i >= 0; --i) {
            int maxDiff = INT_MIN;
            int currentSum = 0;

            // Try taking 1, 2, or 3 stones
            for (int X = 1; X <= 3 && i + X <= n; ++X) {
                currentSum += stoneValue[i + X - 1];
                int opponentDiff = dp[i + X];
                maxDiff = std::max(maxDiff, currentSum - opponentDiff);
            }

            dp[i] = maxDiff;
        }

        if (dp[0] > 0) return "Alice";
        if (dp[0] < 0) return "Bob";
        return "Tie";
    }
};