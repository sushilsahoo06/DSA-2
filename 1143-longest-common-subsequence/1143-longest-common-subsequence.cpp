
class Solution {
public:
    int longestCommonSubsequence(std::string text1, std::string text2) {
        int m = text1.length();
        int n = text2.length();
        
        // dp[j] will store the length of LCS of text1[0...i-1] and text2[0...j-1]
        std::vector<int> prev(n + 1, 0), curr(n + 1, 0);
        
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (text1[i - 1] == text2[j - 1]) {
                    curr[j] = 1 + prev[j - 1];
                } else {
                    curr[j] = std::max(prev[j], curr[j - 1]);
                }
            }
            prev = curr;
        }
        
        return prev[n];
    }
};