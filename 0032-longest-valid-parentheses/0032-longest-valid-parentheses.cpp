class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        int open = 0, close = 0;
        int max_len = 0;
        
        // Left to right pass
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                open++;
            } else {
                close++;
            }
            
            if (close == open) {
                max_len = max(max_len, open + close);
            } else if (close > open) {
                open = close = 0;
            }
        }
        
        // Right to left pass
        open = close = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '(') {
                open++;
            } else {
                close++;
            }
            
            if (open == close) {
                max_len = max(max_len, open + close);
            } else if (open > close) {
                open = close = 0;
            }
        }
        
        return max_len;
    }
};