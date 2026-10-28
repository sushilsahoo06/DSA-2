class Solution {
public:
    int longestStrChain(vector<string>& words) {
        // Sort the words by their lengths in ascending order
        sort(words.begin(), words.end(), [](const string& a, const string& b) {
            return a.length() < b.length();
        });

        unordered_map<string, int> dp;
        int maxChain = 1;

        for (const string& word : words) {
            int currentLength = 1;
            
            // Try removing each character one by one to find predecessors
            for (int i = 0; i < word.length(); ++i) {
                string predecessor = word.substr(0, i) + word.substr(i + 1);
                
                if (dp.count(predecessor)) {
                    currentLength = max(currentLength, dp[predecessor] + 1);
                }
            }
            
            dp[word] = currentLength;
            maxChain = max(maxChain, currentLength);
        }

        return maxChain;
    }
};