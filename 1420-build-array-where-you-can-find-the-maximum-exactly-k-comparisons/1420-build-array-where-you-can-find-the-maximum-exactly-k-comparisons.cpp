
class Solution {
public:
    int numOfArrays(int n, int m, int k) {
        long long MOD = 1e9 + 7;
        
        // dp[j][c]: number of ways where the maximum value so far is `j` and cost is `c`
        // prefix[j][c]: prefix sum of dp[v][c] for v from 1 to j, used to optimize the transition in O(1)
        long long dp[101][51];
        long long prefix[101][51];
        long long next_dp[101][51];
        long long next_prefix[101][51];
        
        memset(dp, 0, sizeof(dp));
        memset(prefix, 0, sizeof(prefix));
        
        // Base case: for array length 1
        for (int j = 1; j <= m; ++j) {
            dp[j][1] = 1;
        }
        
        for (int j = 1; j <= m; ++j) {
            for (int c = 1; c <= k; ++c) {
                prefix[j][c] = (prefix[j - 1][c] + dp[j][c]) % MOD;
            }
        }
        
        // Build the array step by step from length 2 to n
        for (int i = 2; i <= n; ++i) {
            memset(next_dp, 0, sizeof(next_dp));
            memset(next_prefix, 0, sizeof(next_prefix));
            
            for (int j = 1; j <= m; ++j) {
                for (int c = 1; c <= k; ++c) {
                    // Option 1: Keep the same maximum value `j` (can pick any of the `j` elements)
                    long long same_max = (dp[j][c] * j) % MOD;
                    
                    // Option 2: Introduce a new maximum `j` from a previous smaller maximum < `j` (cost becomes c - 1)
                    long long new_max = prefix[j - 1][c - 1];
                    
                    next_dp[j][c] = (same_max + new_max) % MOD;
                }
            }
            
            // Compute prefix sums for the next state layer
            for (int j = 1; j <= m; ++j) {
                for (int c = 1; c <= k; ++c) {
                    next_prefix[j][c] = (next_prefix[j - 1][c] + next_dp[j][c]) % MOD;
                }
            }
            
            // Move to the next iteration
            memcpy(dp, next_dp, sizeof(dp));
            memcpy(prefix, next_prefix, sizeof(prefix));
        }
        
        // Sum up all valid ways of length `n` with total cost `k` across all possible maximum values `j`
        long long total_ways = 0;
        for (int j = 1; j <= m; ++j) {
            total_ways = (total_ways + dp[j][k]) % MOD;
        }
        
        return total_ways;
    }
};