class Solution {
public:
    int n;
    int memo[1001][1002]; // memoization table (prev is shifted by +1, so -1 becomes 0)

    static bool myfunctions(const string &w1, const string &w2) {
        return w1.length() < w2.length();
    }
    
    bool isPred(const string &curr, const string &prev){
        int m = curr.length();
        int len = prev.length();

        if(len >= m || m - len != 1) return false;

        int i = 0, j = 0;
        while(i < m && j < len){
            if(prev[j] == curr[i]){
                j++;
            }
            i++;
        }
        return (j == len);
    }
    
    int solve(int curr, int prev, vector<string>& word) {
        if(curr == n) return 0;
        
        // Memoization check (prev + 1 to handle -1 index)
        if(memo[curr][prev + 1] != -1) {
            return memo[curr][prev + 1];
        }
        
        int take_idx = 0;
        // Option 1: Try to take the current word if it's a valid successor to `prev`
        if(prev == -1 || isPred(word[curr], word[prev])) {
            take_idx = 1 + solve(curr + 1, curr, word);
        }
        
        // Option 2: Skip the current word
        int skip_idx = solve(curr + 1, prev, word);
        
        return memo[curr][prev + 1] = max(take_idx, skip_idx);
    }
    
    int longestStrChain(vector<string>& words) {
        n = words.size();
        sort(begin(words), end(words), myfunctions);
        
        memset(memo, -1, sizeof(memo));
        return solve(0, -1, words);
    }
};