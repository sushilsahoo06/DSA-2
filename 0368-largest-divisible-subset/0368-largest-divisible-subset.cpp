class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return {};
        
        // Sort the array to ensure divisibility flows in one direction
        sort(nums.begin(), nums.end());
        
        vector<int> dp(n, 1);
        vector<int> parent(n, -1);
        
        int maxLen = 1;
        int maxIndex = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] % nums[j] == 0 && dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                    parent[i] = j;
                }
            }
            if (dp[i] > maxLen) {
                maxLen = dp[i];
                maxIndex = i;
            }
        }
        
        // Reconstruct the subset using the parent pointers
        vector<int> result;
        int curr = maxIndex;
        while (curr != -1) {
            result.push_back(nums[curr]);
            curr = parent[curr];
        }
        
        return result;
    }
};