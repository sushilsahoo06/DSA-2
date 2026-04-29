#include <bits/stdc++.h>
using namespace std;

vector<int> mergeArrays(int n, int arr[], int k, int brr[]) {
    int i = 0, j = 0;
    vector<int> merged;

    while(i < n && j < k){
        if(arr[i] < brr[j]){
            merged.push_back(arr[i]);
            i++;
        } else if(brr[j] < arr[i]){
            merged.push_back(brr[j]);
            j++;
        } else {
            merged.push_back(arr[i]);
            merged.push_back(brr[j]);
            i++;
            j++;
        }
    }

    while(i < n) {
        merged.push_back(arr[i]);
        i++;
    }

    while(j < k) {
        merged.push_back(brr[j]);
        j++;
    }

    return merged;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k;
    if (!(cin >> n)) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    if (!(cin >> k)) return 0;
    int brr[k];
    for (int i = 0; i < k; i++) cin >> brr[i];

    vector<int> result = mergeArrays(n, arr, k, brr);

    for (int val : result) {
        cout << val << " ";
    }
    
    return 0;
}