class Solution {
public:
    vector<int> findNSR(vector<int>& height) {
        stack<int> st;
        int n = height.size();
        vector<int> NSR(n, n);

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && height[st.top()] >= height[i]) {
                st.pop();
            }
            NSR[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return NSR;
    }

    vector<int> findNSL(vector<int>& height) {
        stack<int> st;
        int n = height.size();
        vector<int> NSL(n, -1);

        for (int i = 0; i < n; i++) {
            while (!st.empty() && height[st.top()] >= height[i]) {
                st.pop();
            }
            NSL[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return NSL;
    }

    int findMaxArea(vector<int>& height) {
        vector<int> NSR = findNSR(height);
        vector<int> NSL = findNSL(height);
        int n = height.size();
        int maxArea = 0;

        for (int i = 0; i < n; i++) {
            int width = NSR[i] - NSL[i] - 1;
            int area = width * height[i];
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return 0;

        int n = matrix.size();    // Number of Rows
        int m = matrix[0].size(); // Number of Columns

        vector<int> height(m, 0);

        for (int col = 0; col < m; col++) {
            height[col] = (matrix[0][col] == '1') ? 1 : 0;
        }

        int maxArea = findMaxArea(height);
        for (int row = 1; row < n; row++) {
            for (int col = 0; col < m; col++) {
                if (matrix[row][col] == '0') {
                    height[col] = 0; 
                } else {
                    height[col] += 1;
                }
            }
            maxArea = max(maxArea, findMaxArea(height));
        }

        return maxArea;
    }
};