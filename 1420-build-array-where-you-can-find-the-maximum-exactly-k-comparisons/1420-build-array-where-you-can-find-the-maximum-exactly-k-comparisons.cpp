class Solution {
public:
    int N, M, K;
    long long MOD = 1e9 + 7;
    long long DP[51][51][102];

    long long solve(int idx, int serchCost, int maxSoFar) {
        if (idx == N) {
            if (serchCost == K) return 1;
            else return 0;
        }
        
        if (DP[idx][serchCost][maxSoFar + 1] != -1) {
            return DP[idx][serchCost][maxSoFar + 1];
        }

        long long result = 0;
        for (int i = 1; i <= M; i++) {
            if (i > maxSoFar) {
                result = (result + solve(idx + 1, serchCost + 1, i)) % MOD;
            } else {
                result = (result + solve(idx + 1, serchCost, maxSoFar)) % MOD;
            }
        }

        return DP[idx][serchCost][maxSoFar + 1] = result;
    }

    int numOfArrays(int n, int m, int k) {
        N = n;
        M = m;
        K = k;
        memset(DP, -1, sizeof(DP));
        return solve(0, 0, -1);
    }
};