class Solution {
public:
    vector<int> findPgee(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            int currEle = nums[i];
            while (!st.empty() && nums[st.top()] <= currEle) {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> findNge(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            int currEle = nums[i];
            while (!st.empty() && nums[st.top()] < currEle) {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> findNse(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;
        
        for (int i = n - 1; i >= 0; i--) {
            int currEle = nums[i];
            while (!st.empty() && nums[st.top()] >= currEle) {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> findPsee(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            int currEle = nums[i];
            while (!st.empty() && currEle < nums[st.top()]) {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }

    long long subArrayRanges(vector<int>& nums) {
        vector<int> nse = findNse(nums);
        vector<int> psee = findPsee(nums);
        vector<int> nge = findNge(nums);
        vector<int> pgee = findPgee(nums);
        
        long long total = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            long long left_min = i - psee[i];
            long long right_min = (nse[i] == -1 ? n : nse[i]) - i;
            
            long long left_max = i - pgee[i];
            long long right_max = (nge[i] == -1 ? n : nge[i]) - i;

            long long max_contributions = left_max * right_max * nums[i];
            long long min_contributions = left_min * right_min * nums[i];
            
            total += (max_contributions - min_contributions);
        }

        return total;
    }
};