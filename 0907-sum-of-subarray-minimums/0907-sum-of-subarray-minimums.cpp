class Solution {
public:
    vector<int> findNse(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        
        for (int i = n - 1; i >= 0; i--) {
            int currEle = arr[i];
            while (!st.empty() && arr[st.top()] >= currEle) {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> findPsee(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            int currEle = arr[i];
            while (!st.empty() && currEle < arr[st.top()]) {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }
    
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> nse = findNse(arr);
        vector<int> psee = findPsee(arr);
        
        int mod = 1e9 + 7;
        long long total = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            long long left = i - psee[i];
            long long right = (nse[i] == -1 ? n : nse[i]) - i;
            long long freq = (left * right) % mod;
            total = (total + (freq * arr[i]) % mod) % mod;
        }

        return total;
    }
};