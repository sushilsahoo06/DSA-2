#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  
  int hashing[13] = {0}; 
  for(int i = 0; i < n; i++) {
    hashing[arr[i]] += 1;
  }

  // Fetching
  int q;
  cin >> q;
  while(q--) {
    int number;
    cin >> number;
    cout << hashing[number] << endl;
  }
  return 0;
}