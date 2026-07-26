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

    int largestRectangleArea(vector<int>& heights) {
        vector<int>NSR=findNSR(heights);
        vector<int>NSL=findNSL(heights);
        int n=heights.size();

        int maxArea=0;
        for(int i=0;i<n;i++){
            int width=NSR[i] - NSL[i]-1;
            int area=width*heights[i];
            maxArea=max(maxArea,area);
        }
        return maxArea;
    }
};