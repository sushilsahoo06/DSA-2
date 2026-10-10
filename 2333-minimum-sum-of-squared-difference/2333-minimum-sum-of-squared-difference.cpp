class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        long long total_k = (long long)k1 + k2;
        
        // Count frequencies of each absolute difference
        vector<long long> count(100005, 0);
        long long max_diff = 0;
        for (int i = 0; i < n; ++i) {
            long long diff = abs(nums1[i] - nums2[i]);
            count[diff]++;
            max_diff = max(max_diff, diff);
        }
        
        // Greedily reduce the largest differences
        for (long long i = max_diff; i > 0 && total_k > 0; --i) {
            if (count[i] == 0) continue;
            
            long long take = min(total_k, count[i]);
            count[i] -= take;
            count[i - 1] += take;
            total_k -= take;
        }
        
        // Calculate the minimum sum of squared differences
        long long ans = 0;
        for (long long i = 1; i <= max_diff; ++i) {
            if (count[i] > 0) {
                ans += count[i] * i * i;
            }
        }
        
        return ans;
    }
};