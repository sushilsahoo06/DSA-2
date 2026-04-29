#include <bits/stdc++.h>
using namespace std;

vector<int> unionOfTwoArrays(int n, int arr[], int k, int brr[]) {
    int i = 0, j = 0;
    vector<int> temp;

    while (i < n && j < k) {
        if (arr[i] < brr[j]) {
            if (temp.empty() || temp.back() != arr[i]) {
                temp.push_back(arr[i]);
            }
            i++;
        } else if (brr[j] < arr[i]) {
            if (temp.empty() || temp.back() != brr[j]) {
                temp.push_back(brr[j]);
            }
            j++;
        } else { // Both are equal
            if (temp.empty() || temp.back() != arr[i]) {
                temp.push_back(arr[i]);
            }
            i++;
            j++;
        }
    }

    // Add remaining elements from arr
    while (i < n) {
        if (temp.empty() || temp.back() != arr[i]) {
            temp.push_back(arr[i]);
        }
        i++;
    }

    // Add remaining elements from brr
    while (j < k) {
        if (temp.empty() || temp.back() != brr[j]) {
            temp.push_back(brr[j]);
        }
        j++;
    }
    return temp;
}

int main()
{
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

    vector<int> result = unionOfTwoArrays(n, arr, k, brr);

    for (int val : result) {
        cout << val << " ";
    }
    
    return 0;
}