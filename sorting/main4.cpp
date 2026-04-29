#include <bits/stdc++.h>
using namespace std;

vector<int> inteSectionOfTwoArrays(int n, int arr[], int k, int brr[]) {
    int i = 0, j = 0;
    vector<int> interSection;
    while(i < n && j < k){
      if(arr[i] == brr[j]){
        if(interSection.empty() || interSection.back() != arr[i]){
          interSection.push_back(arr[i]);
        }
        i++;
        j++;
      }else if(arr[i] < brr[j]){
        i++;
      }else{
        j++;
      }
      
    }
    return interSection;
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

    vector<int> result = inteSectionOfTwoArrays(n, arr, k, brr);

    for (int val : result) {
        cout << val << " ";
    }
    
    return 0;
}