
class Solution {
private:
    // Safe nCr function capped at k to avoid integer overflow
    long long nCr(int n, int r, long long k) {
        if (r < 0 || r > n) return 0;
        if (r == 0 || r == n) return 1;
        r = min(r, n - r);
        
        long long result = 1;
        for (int i = 1; i <= r; i++) {
            result = result * (n - i + 1) / i;
            if (result >= k) return k; // Cap early
        }
        return result;
    }

    // Calculates total unique permutations for remaining character counts
    long long countPermutations(const vector<int>& count, long long k) {
        long long totalWays = 1;
        int totalLetters = 0;
        
        for (int c : count) totalLetters += c;

        for (int c = 0; c < 26; c++) {
            if (count[c] > 0) {
                long long ways = nCr(totalLetters, count[c], k);
                
                // Multiply safely avoiding overflow beyond k
                if (ways == 0) return 0;
                if (totalWays > k / ways) totalWays = k;
                else totalWays *= ways;
                
                totalLetters -= count[c];
            }
        }
        return totalWays;
    }

public:
    string smallestPalindrome(string s, long long k) {
        int n = s.size();
        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

        int oddCount = 0;
        char midChar = '\0';
        vector<int> halfFreq(26, 0);

        // Calculate half frequency and identify middle odd character (if any)
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 != 0) {
                oddCount++;
                midChar = 'a' + i;
            }
            halfFreq[i] = freq[i] / 2;
        }

        // More than 1 odd character cannot form a palindrome
        if (oddCount > 1) return "";

        string halfResult = "";
        int halfLength = n / 2;

        // Build first half character by character
        for (int pos = 0; pos < halfLength; pos++) {
            bool placed = false;
            for (int c = 0; c < 26; c++) {
                if (halfFreq[c] > 0) {
                    halfFreq[c]--; // Pick character 'a' + c
                    
                    long long ways = countPermutations(halfFreq, k);
                    if (ways >= k) {
                        halfResult.push_back('a' + c);
                        placed = true;
                        break;
                    }
                    
                    k -= ways;
                    halfFreq[c]++; // Backtrack
                }
            }
            if (!placed) return ""; // k exceeds available permutations
        }

        // Construct complete palindrome
        string rev = halfResult;
        reverse(rev.begin(), rev.end());

        if (midChar != '\0') {
            return halfResult + midChar + rev;
        }
        return halfResult + rev;
    }
};