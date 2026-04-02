#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
    // 1. Use a set to automatically handle duplicate triplets
    set<vector<int>> st; 

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                // 2. Fix: compare sum to K, not the index k
                if(arr[i] + arr[j] + arr[k] == K) {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    // Sort the triplet so {1, 2, 3} and {3, 2, 1} are treated as the same
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    
    // 3. Convert the set back to a vector of vectors for the return type
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}